#include "binary_trees.h"


/**
 *binary_tree_insert_left - Function that inserts a node to the left
 *as the left child of another node
 *@parent: A node that points to the left child to be inserted
 *@value: Key/value that the new left child stores
 *
 *Return: Pointer to the left child or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;

	return (newnode);
}
