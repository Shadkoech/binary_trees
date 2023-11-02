#include "binary_trees.h"


/**
 *binary_tree_rotate_right - Function rotating binary tree to the right
 *@tree: Pointer to the root node of the binary tree to rotate
 *
 *Return: A pointer to the new root_node of the rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;


	if (tree == NULL || tree->left == NULL)
		return (NULL);

	if (tree->left != NULL)
	{
		temp = tree->left->right;
		new_root = tree->left;
		new_root->parent = tree->parent;
		new_root->right = tree;
		tree->parent = new_root;
		tree->left = temp;
		if (temp != NULL)
			temp->parent = tree;

		return (new_root);
	}
	return (NULL);
}
