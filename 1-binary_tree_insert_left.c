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
	binary_tree_t *tmp;
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = node->right = NULL;
	node->n = value;

	if (parent->left == NULL)
		parent->left = node;
	else
	{
		tmp = parent->left;
		parent->left = node;
		tmp->parent = node;
		node->left = tmp;
	}
	return (node);
}
