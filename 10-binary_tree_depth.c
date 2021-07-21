#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the depth of a node in a binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		counter++;
		tree = tree->parent;
	}

	return (counter);
}
