#include "binary_trees.h"

/**
 *binary_tree_postorder - Function going through the binary tree in
 *	post-order traversal
 *@tree: The pointer to the root node of the tree to traverse
 *@func: function pointer to call on each node
 *
 * Return: Nothing(void)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
