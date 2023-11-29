#include "binary_trees.h"

/**
 * find_depth - Finds the depth of a tree
 *
 * @tree: The tree
 *
 * Return: Depth of a node
 */
size_t find_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_depth(tree->parent) + 1);
}
/**
 * binary_tree_depth - Measures the dept of a node
 *
 * @tree: Node on the tree to be measured
 *
 * Return: The depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (find_depth(tree) - 1);
}
