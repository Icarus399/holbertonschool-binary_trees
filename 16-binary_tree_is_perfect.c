#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: parameter
 * Return: if a binary tree is perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->right) ==
		binary_tree_height(tree->left))
		return (binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left));

	return (0);
}
