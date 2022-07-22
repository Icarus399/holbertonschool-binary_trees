#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left child
 *
 * @parent: parameter
 * @value: parameter
 * Return: new child at left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newchild = NULL;

	if (parent == NULL)
		return (NULL);

	newchild = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newchild->left = parent->left;
		parent->left->parent = newchild;
	}
	parent->left = newchild;

	return (newchild);
}
