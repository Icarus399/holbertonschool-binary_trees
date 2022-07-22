#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes thru a binary tree
 * using the inorder traversal
 *
 * @tree: parameter
 * @func: parameter
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
