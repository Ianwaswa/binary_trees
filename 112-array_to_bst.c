#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the array's 1st element
 * @size: the number of elements in the array
 * Return: A pointer to the root node of newly created BST and NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)

{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
