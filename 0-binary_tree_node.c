#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: The parent node
 * @value: The node value
 *
 * Return: A binary tree object
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->left = node->right = NULL;
	node->parent = parent;
	node->n = value;
	return (node);
}
