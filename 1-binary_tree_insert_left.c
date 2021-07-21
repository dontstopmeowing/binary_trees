#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	new = calloc(1, sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;

	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = new;
		new->left = tmp;
		tmp->parent = new;
	}
	else
		parent->left = new;
	return (new);
}
