#include "binary_trees.h"

/**
 *array_to_bst - Function that builds BST from an array
 *@array: pointer to the first element of the array to be converted
 *@size: The number of elements in the array
 *
 *Return: Pointer to the root node of the created BST, NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t index;
	bst_t *root;

	for (index = 0; index < size; index++)
		bst_insert(&root, array[index]);

	return (root);
}
