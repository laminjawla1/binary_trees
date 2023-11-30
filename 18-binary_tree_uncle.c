#include "binary_trees.h"

/**
 * getSibling - Finds the sibling of a node
 *
 * @node: The sibling
 *
 * Return: The sibling of a node
 */
binary_tree_t *getSibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
/**
 * binary_tree_uncle - Finds the uncle of a given node
 *
 * @node: The node to be computed
 *
 * Return: The unbcle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (getSibling(node->parent));
}
