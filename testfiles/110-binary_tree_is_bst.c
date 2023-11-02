#include "binary_trees.h"

/**
 *bst_recursive - A function that checks if a given binary tree is valid BST
 *	between the range (mini to maxi range)
 *@tree: The roo node of the tree to check
 *@mini: The lowest key/value in the visited nodes
 *@maxi: Highest value of the visited nodes
 *
 * Return: 1 if tree is valid BST and 0 otherwise
 */
int bst_recursive(const binary_tree_t *tree, int mini, int maxi)
{
	if (tree != NULL)
	{

		if (tree->n < mini || tree->n > maxi)
			return (0);

		return (bst_recursive(tree->left, mini, tree->n - 1) &&
			bst_recursive(tree->right, tree->n + 1, maxi));
	}
	return (1);
}


/**
 *binary_tree_is_bst - Function that checks is a binary tree is a valid
 *	Binary Search Tree (BST)
 *@tree: The root node of the tree to do the check
 *
 *Return: 1 if tree is a valid BST and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (1);
	return (bst_recursive(tree, INT_MIN, INT_MAX));
}
