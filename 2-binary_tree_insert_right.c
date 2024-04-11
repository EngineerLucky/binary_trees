#include "binary_trees.h"

/**
 * binary_tree_insert_right - The function nserts a node
 * of another in a binary tree.
 * @parent: This is a  pointer to the node to insert the right-child in.
 * @value: This is the value to store in the new node.
 * Return: If parent is NULL or an error occurs, otherwise -
 * a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

