#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse the tree using
 * inorder method
 *
 * @tree: The tree to be traversed
 * @func: Function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
