package tree_sitter_dataweave_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-dataweave"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dataweave.Language())
	if language == nil {
		t.Errorf("Error loading Dataweave grammar")
	}
}
