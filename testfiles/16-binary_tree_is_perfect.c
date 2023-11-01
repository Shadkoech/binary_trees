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


/**
 *binary_tree_size - Function measuring the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *
 *Return: 0 if the tree is NULL, else the size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	else
	{
		size += 1;  /* accounts for current node */
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
}


/**
 *_pow_recursion - Function that returns the value of x raised y
 *@x: The value to raise
 *@y: The exponent (value to raise x on)
 *
 *Return: x to the power of y or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* function used to compute 2^(height+1) */
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}


/**
 *binary_tree_is_perfect - A function checking is a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 *Return: 0 if tree is NULL else the perfect tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t No_node = 0;
	size_t power = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	No_node = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == No_node);
}
