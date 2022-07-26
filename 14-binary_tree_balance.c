#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: parameter
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, balance;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	balance = left - right;

	if (tree->right)
		balance += 0;
	else
		balance += 1;

	if (tree->left)
		balance -= 0;
	else
		balance -= 1;

	return (balance);
}
