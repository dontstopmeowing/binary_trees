#include "binary_trees.h"

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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 *
 * Description: If tree is NULL, return 0
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, balance;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left, 0) - 1;
	right = tree_height(tree->right, 0) - 1;
	balance = left - right;
	return (balance);
}
