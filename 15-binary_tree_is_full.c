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
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to measure the balance factor of
 *
 * Description: If tree is NULL, return 0
 *
 * Return: 1 if full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right, res;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	res = left * right;
	return (res);
}