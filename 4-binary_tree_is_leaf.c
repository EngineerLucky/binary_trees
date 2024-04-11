#include "binary_trees.h"

/**
 * binary_tree_is_leaf - The function check if node is leaf of a binary tree
 * @node: This is a  pointer to the node to check.
 * Return: If the node is a leaf - 1, Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

