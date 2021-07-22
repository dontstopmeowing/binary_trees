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
 * tree_height - find height of binary tree using recursion
 * @tree: pointer to the root node of the tree to traverse
 * @height: height of given tree
 * Return: height of a tree otherwise the given tree value.
*/
size_t tree_height(const binary_tree_t *tree, size_t height)
{
	size_t left, right;

	if (tree == NULL)
		return (height);

	left = tree_height(tree->left, height + 1);
	right = tree_height(tree->right, height + 1);

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to measure the balance factor of
 *
 * Description: If tree is NULL, return 0
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (tree_height(tree->left, 0) - 1 == tree_height(tree->right, 0) - 1)
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
