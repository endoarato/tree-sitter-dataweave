def get_error_nodes(node: Node):
    def traverse_tree_for_errors(node: Node):
        for n in node.children:
            if n.type == "ERROR" or n.is_missing:
                yield n
            if n.has_error:
                # there is an error inside this node let's check inside
                yield from traverse_tree_for_errors(n)

    yield from traverse_tree_for_errors(node)


def print_error_line(er_line: int, padding: str, column_start, column_end, node_error):
    print(f"{padding}{er_line}{padding}{file_lines[er_line-1]}")
    padding_with_line_number = " " * (len(f"{er_line}") + column_start-1)
    cursor_size = max(1, column_end - column_start)
    print(
        f"{padding * 2}{Fore.RED}{padding_with_line_number}{'~' * cursor_size}")

    if node_error.has_error and node_error.is_missing:
        error_message = f"{node_error.sexp()[1:-1]}"
    else:
        unexpected_tokens = "".join(n.text.decode('utf-8')
                                    for n in node_error.children)
        error_message = f"Unexpected token(s): {unexpected_tokens}"
    print(
        f"{padding * 2}{Fore.RED}{padding_with_line_number}{error_message}:")


def print_error(root_node: Node, error_type: str = "SYNTAX_ERROR"):
    padding = " " * 5
    for node_error in get_error_nodes(root_node):
        er_line = node_error.start_point[0]+1
        column_start = node_error.start_point[1] + 1
        column_end = node_error.end_point[1] + 1
        print(
            f"{Fore.RED}{error_type}{Fore.RESET}:  {node_error.sexp()[1:-1]}")
        print(
            f"{padding}in file: '{file}:{er_line}:{column_start}:{column_end}', line: {er_line}", end=", ")
        print(
            f"from column {column_start} to {column_end}\n")
        print(f"{padding}{file_name}")
        if "--show-file" in sys.argv:
            print_file_with_errors(er_line, padding,
                                   column_start, column_end, node_error)
        else:
            print_error_line(er_line, padding, column_start,
                             column_end, node_error)