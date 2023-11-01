#include "binary_trees.h"

/**
 *binary_tree_leaves - Function that counts the leaves of a binary tree
 *@tree: Pointer to root node of the tree that it's leaves ought to be
 *	counted
 *
 * Return: 0 if tree is NULL, else the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
