#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: First cousin
 * @second: Second cousin
 *
 * Return: The common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second
)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first == second->parent || !first->parent ||
			(!first->parent->parent && second->parent))
		return (binary_trees_ancestor(first, second->parent));
	else if (first == second || !second->parent ||
		(!second->parent->parent && first->parent))
		return (binary_trees_ancestor(first->parent, second));
	return (binary_trees_ancestor(first->parent, second->parent));
}
