#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to left-child's node
 * @value: value stored in the new node
 * Return: NULL for an error, otherwise return a pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
binary_tree_t *newNode;
if (parent == NULL)
return (NULL);
newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->parent = parent;
newNode->left = parent->left;
newNode->right = NULL;
parent->left = newNode;
if (newNode->left)
newNode->left->parent = newNode;

return (newNode);
}
