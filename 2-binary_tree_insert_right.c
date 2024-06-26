#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child.
 * @value: value stored in the new node
 * Return: NULL for error, otherwise return a pointer to the node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
binary_tree_t *new;
if (parent == NULL)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->n = value;
new->parent = parent;
new->left = NULL;
new->right = parent->right;
parent->right = new;
if (new->right)
new->right->parent = new;

return (new);
}
