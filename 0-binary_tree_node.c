#include "binary_trees.h"

/**
 * binary_tree_node - The function creates a binary tree node.
 * @parent: This a  pointer to the parent of the node to create.
 * @value: That will be the value to put in the new node
 * Retun: NUL if there is an erorr
 * Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

