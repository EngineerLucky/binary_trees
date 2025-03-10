#include "binary_trees.h"

/**
 * binary_tree_postorder - This function traverses
 * a binary tree using post-order traversal.
 * @tree: This is a pointer to the root node of the tree to traverse.
 * @func: This is apointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

