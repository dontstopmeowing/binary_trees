#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the depth of a node in a binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0, i;

	if (tree == NULL)
		return (0);

	for (i = 0; tree->parent != NULL; i++)
	{
		counter++;
		tree = tree->parent;
	}

	return (counter);
}
