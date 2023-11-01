#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if the node is NULL,
 * the parent is NULL, the grandparent is NULL, or the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return (grandparent->right);
	else if (grandparent->right == node->parent)
		return (grandparent->left);

	/*If node's parent is not the left or right child of the grandparent*/
	return (NULL);
}
