#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	size = left + right;

	return (size);
}
