#include "binary_trees.h"

/**
 * binary_tree_size - return size binary tree
 * @tree: tree
 * Return: size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right + 1;

	return (size);
}
