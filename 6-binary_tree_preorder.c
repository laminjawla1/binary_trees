#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse the tree using
 * preorder method
 *
 * @tree: The tree to be traversed
 * @func: Function pointer
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
