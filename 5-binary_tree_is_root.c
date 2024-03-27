#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is root.
 * @node: Node's pointer to root
 * Return: 1 if it's a root node, otherwise return 0
 */

int binary_tree_is_root(const binary_tree_t *node)

{
if (node == NULL || node->parent != NULL)
{
return (0);
}
else
{
return (1);
}

}
