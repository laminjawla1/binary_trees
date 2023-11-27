#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node at the right of the root
 *
 * @parent: Parent of the node
 * @value: Value of the node to be set
 *
 * Return: Binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;
	binary_tree_t *node = create_node(value);

	node->parent = parent;

	if (parent == NULL || node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		tmp = parent->right;
		parent->right = node;
		tmp->parent = node;
		node->right = tmp;
	}
	return (node);
}
