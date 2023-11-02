#include "binary_trees.h"

/**
 *in_order_successor - Function returning mini value of a BST
 *@root: pointer to root node of the BST
 *
 *Return: pointer to the node with mini value
 */
bst_t *in_order_successor(bst_t *root)
{
	while (root->left != NULL)
		root = root->left;
	return (root);
}


/**
 *bst_node_delete - Function deleting a node from BST
 *@root: pointer to tree root node
 *@node: pointer to node the particular node to delete
 *
 * Return: Pointer to new root after deletion process
 */
bst_t *bst_node_delete(bst_t *root, bst_t *node)
{
	bst_t *parent = node->parent, *successor_node = NULL;

	/*When there is only a child to the right */
	if (node->left == NULL)
	{
		if (parent != NULL && parent->left == node)
			parent->left = node->right;
		else if (parent != NULL)
			parent->right = node->right;
		if (node->right != NULL)
			node->right->parent = parent;
		free(node);
		return (parent == NULL ? node->right : root);
	}

	/*When there is only a left child */
	if (node->right == NULL)
	{
		if (parent != NULL && parent->left == node)
			parent->left = node->left;
		else if (parent != NULL)
			parent->right = node->left;
		if (node->left != NULL)
			node->left->parent = parent;
		free(node);
		return (parent == NULL ? node->left : root);
	}

	/* When both the children are present */
	successor_node = in_order_successor(node->right);
	node->n = successor_node->n;

	return (bst_node_delete(root, successor_node));
}


/**
 *recursive_removal - Function that recursively removes given nodes from
 *	a binary tree
 *@root: pointer to root node of tree to perform recursive removal
 *@node: A Pointer to the current node
 *@value: The key/value in the node that is aimed to be removed
 *
 * Return: Pointer to root after removal process
 */
bst_t *recursive_removal(bst_t *root, bst_t *node, int value)
{
	if (node != NULL)
	{
		if (node->n == value)
			return (bst_node_delete(root, node));
		if (node->n > value)
			return (recursive_removal(root, node->left, value));
		return (recursive_removal(root, node->right, value));
	}
	return (NULL);
}


/**
 *bst_remove - Function removing a code from a Binary tree
 *@root: pointer to the root node of the tree to remove a node
 *@value: The value to remove from the tree
 *
 *Return: A pointer to the new root node after removal
 */
bst_t *bst_remove(bst_t *root, int value)
{
	return (recursive_removal(root, root, value));
}
