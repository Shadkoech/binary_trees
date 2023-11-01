#include "binary_trees.h"


/**
 *binary_tree_nodes - Function that counts nodes with atleast
 *	1 child in a given binary tree
 *@tree: pointer to the root node of the tree to count the nodes
 *
 * Return: 0 if the tree is NULL, else number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t No_nodes = 0;

	if (tree != NULL)
	{
		/**
		 *Check if the current node has at least one child using a ternary operator.
		 * If it does, increment the node count by 1; otherwise, add 0 (no change)
		 */

		No_nodes += (tree->left || tree->right) ? 1 : 0;
		No_nodes += binary_tree_nodes(tree->left);
		No_nodes += binary_tree_nodes(tree->right);
	}

	return (No_nodes);
}
