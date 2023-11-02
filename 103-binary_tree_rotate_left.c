#include "binary_trees.h"

/**
 *binary_tree_rotate_left - Function that performs a left-rotation
 *	to a given binary tree
 *@tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the root node of the rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;


	if (tree == NULL || tree->right == NULL)
		return (NULL);

	if (tree->right != NULL)
	{
		temp = tree->right->left;
		new_root = tree->right;
		new_root->parent = tree->parent;
		new_root->left = tree;
		tree->parent = new_root;
		tree->right = temp;
		if (temp != NULL)
			temp->parent = tree;

		return (new_root);
	}
	return (NULL);
}
