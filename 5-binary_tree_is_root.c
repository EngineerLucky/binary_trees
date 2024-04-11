#include "binary_trees.h"

/**
 * binary_tree_is_root - The function checks
 * if a node is a root of a binary tree.
 * @node: This is a pointer to the node to check.
 * Return: -1  If the node is a root, Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

