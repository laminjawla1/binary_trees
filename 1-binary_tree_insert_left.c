#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node at the left of the root
 *
 * @parent: Parent of the node
 * @value: Value of the node to be set
 *
 * Return: Binary tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL, *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->left = node->right = NULL;
	node->parent = parent;
	node->n = value;

	tmp = parent->left;
	if (tmp != NULL)
	{
		tmp->parent = node;
		node->left = tmp;
	}
	return (node);
}
