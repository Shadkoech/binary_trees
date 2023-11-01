#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		/* An empty tree is considered full */
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		/* Leaf nodes are full trees */
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one subtree is empty and the other is not, it's not full */
	return (0);
}
