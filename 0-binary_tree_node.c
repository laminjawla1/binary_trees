#include "binary_trees.h"

/**
 * create_node - Creates a new node
 * and sets it field properties
 *
 * @value: Field value
 *
 * Return: A new node
 */
binary_tree_t *create_node(int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->left = node->right = node->parent = NULL;
	node->n = value;
	return (node);
}
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
	binary_tree_t *node = create_node(value);

	if (node == NULL)
		return (NULL);
	node->parent = parent;
	return (node);
}
