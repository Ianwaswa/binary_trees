#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf.
 * @node: A pointer to the node to be checked
 * Return: 1 for a leaf node, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{
if (node == NULL || node->left != NULL || node->right != NULL)
{
return (0);
}
else
{
return (1);
}

}
