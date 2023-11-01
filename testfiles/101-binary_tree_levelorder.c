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

		return ((L > R) ? L + 1 : R + 1);
	}

	return (0);
}



/**
 *binary_tree_level - function performing a specific operation on specified
 *	tree level
 *@tree: Pointer to the root of the tree to perform level operations
 *@l: The specific level to perform operation
 *@func: function pointer to call on each level
 *
 */
void binary_tree_level(const binary_tree_t *tree, size_t l, void (*func)(int))
{
	if (tree == NULL)
		return;
	/* if the tree level is 1, it means you have reached desired level */
	if (l == 1)
		func(tree->n);

	/*
	 * if current level l is greater than 1, recursively call the function
	 * on both left and right side of tree while decrementing levels by 1
	 */
	else if (l > 1)
	{
		binary_tree_level(tree->left, l - 1, func);
		binary_tree_level(tree->right, l - 1, func);
	}
}



/**
 *binary_tree_levelorder - function that traverses a binary in level-order
 *@tree: pointer to the root of the node of the tree to traverse
 *@func: Function pointer to call on each node
 *
 *Returns: Nothing(void)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
		binary_tree_level(tree, i, func);
}
