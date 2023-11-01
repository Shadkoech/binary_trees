#include "binary_trees.h"


/**
 *binary_tree_height - Function that measures the height of binary tree
 *@tree: Pointer to the root node of the binary tree to det. height
 *
 *Return: 0 if tree is NULL else height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		/*declare two variables of size_t to rep the left and right subtrees*/
		size_t L = 0, R = 0;

		L = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		R = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((L > R) ? L : R);
	}

	return (0);
}
