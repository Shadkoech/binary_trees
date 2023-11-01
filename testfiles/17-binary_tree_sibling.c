#include "binary_trees.h"


/**
 *binary_tree_sibling - Function that finds sibling of a node
 *@node: A pointer to the node to find it's sibling
 *
 *Return: NULL if node has no sibling or parent
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
