#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse the tree using
 * postorder method
 *
 * @tree: The tree to be traversed
 * @func: Function pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
