#include "binary_trees.h"

/** binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree
 * @prev: Pointer to the previous node during inorder traversal
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int bst_binary_tree(const binary_tree_t *tree, const binary_tree_t **prev)
{
	if (tree == NULL)
		return (1);

	if (!bst_binary_tree(tree->left, prev))
		return (0);

	if (*prev != NULL && tree->n <= (*prev)->n)
		return (0);

	*prev = tree;

	return (bst_binary_tree(tree->right, prev));
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is a valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	const binary_tree_t *prev = NULL;

	if (!bst_binary_tree(tree, &prev))
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (abs((int)left_height - (int)right_height) > 1)
		return (0);

	if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right))
		return (1);

	return (1);
}
