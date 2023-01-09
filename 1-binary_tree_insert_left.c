#include "binary_trees.h"

/**
 * binary_tree_insert_left - function
 * @parent: *binary_tree_t
 * @value: int
 *
 * Return: *binary_tree_t
*/
binary_tree_t	*binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t	*r;

	if (parent == 0)
		return (0);
	r = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (r == 0)
		return (0);
	if (parent->left)
		r->left = parent->left;
	parent->left = r;
	r->parent = parent;
	r->right = 0;
	r->n = value;
	return (r);
}
