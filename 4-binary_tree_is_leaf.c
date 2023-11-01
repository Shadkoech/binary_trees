#include "binary_trees.h"

/**
 *binary_tree_is_leaf - A function that checks if a node is a leaf
 *@node: A pointer to the node to check
 *
 *Return: 1 is a node is a leaf and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	else
		return (1);
}

