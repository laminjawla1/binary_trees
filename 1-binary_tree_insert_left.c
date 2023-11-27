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
	binary_tree_t *node = create_node(value);

	node->parent = parent;
	if (parent == NULL || node == NULL)
		return (NULL);
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
