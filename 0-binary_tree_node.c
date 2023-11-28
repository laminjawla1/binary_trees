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
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
