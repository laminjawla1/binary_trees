#include "binary_trees.h"

/**
 * create_queue_node - Creates a new node
 *
 * @node: The value for the property
 *
 * Return: The created node or NULL
 */
queue *create_queue_node(const binary_tree_t *node)
{
	queue *new_node = malloc(sizeof(queue));

	if (!new_node)
		return (NULL);
	new_node->node = (binary_tree_t *)node;
	new_node->next = NULL;
	return (new_node);
}
/**
 * enqueue - Adds the next node
 *
 * @Q: The queue structure
 * @node: The node to be added
 *
 * Return: The queue
 */
queue *enqueue(queue *Q, const binary_tree_t *node)
{
	queue *tmp;
	queue *new_node = create_queue_node(node);

	if (!new_node)
		return (NULL);
	if (!Q)
		return (new_node);
	for (tmp = Q; tmp->next; tmp = tmp->next)
		;
	tmp->next = new_node;
	return (Q);
}
/**
 * dequeue - Dequeues an element
 *
 * @head: The queue
 *
 * Return: The value of the dequeued element
 */
int dequeue(queue **head)
{
	int value;
	queue *tmp;

	if (!*head)
		return (INT_MIN);
	value = (*head)->node->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;

	return (value);
}
/**
 * front - Gets the element at the front
 *
 * @Q: The queue
 *
 * Return: The front element
 */
binary_tree_t *front(queue *Q)
{
	if (!Q)
		return (NULL);
	return (Q->node);
}
/**
 * binary_tree_levelorder - Implements the level order
 * traversal
 *
 * @tree: The binary tree
 * @func: The function pointer
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue *Q = NULL;
	binary_tree_t *current;

	if (!tree || !func)
		return;

	Q = enqueue(Q, tree);

	while (Q)
	{
		current = front(Q);
		func(current->n);
		if (current->left)
			Q = enqueue(Q, current->left);
		if (current->right)
			Q = enqueue(Q, current->right);
		dequeue(&Q);
	}
}
