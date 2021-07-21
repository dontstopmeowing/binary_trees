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
 * binary_tree_nodes -  function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	size = left + right + 1;

	return (size);
}
