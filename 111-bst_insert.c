#include "binary_trees.h"


/**
 *bst_insert - A function inserting a value into a Binary Tree Search
 *@tree: Double pointer to the root node of the BST to insert the value
 *@value: The key of the node to be inserted
 *
 * Return: A pointer to created node, NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = NULL;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	temp = *tree;

	if (value < temp->n)
	{
		if (temp->left == NULL)
		{
			temp->left = binary_tree_node(temp, value);
			return (temp->left);
		}
		return (bst_insert(&(temp->left), value));
	}

	if (value > temp->n)
	{
		if (temp->right == NULL)
		{
			temp->right = binary_tree_node(temp, value);
			return (temp->right);
		}
		return (bst_insert(&(temp->right), value));
	}
	return (NULL);
}
