#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree
 *
 * @parent: parameter
 * @value: parameter
 * Return: tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);

	tree->parent = parent;
	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;

	return (tree);
}
