#include "binary_trees.h"

/**
 *binary_tree_node - Function creating a binary tree node
 *@parent: pointer to parent node of the created node
 *@value: The key/value to put in the created node
 *
 *Return: A pointer to the newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
