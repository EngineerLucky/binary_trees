#include "binary_trees.h"


/*
* binary_tree_node - The function creates a binary tree node.
* @parent: This is a pointer to the parent node of the node to create.
* @value: This is the value to put in the new node.
*
* Return: NULL if there is an error, otherwise a pointer to the new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

return (new_node);
}

