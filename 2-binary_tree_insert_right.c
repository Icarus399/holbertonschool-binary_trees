#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right child
 *
 * @parent: parameter
 * @value: parameter
 * Return: new child at right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newchild = NULL;

	if (parent == NULL)
		return (NULL);

	newchild = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		newchild->right = parent->right;
		parent->right->parent = newchild;
	}
	parent->right = newchild;

	return (newchild);
}
