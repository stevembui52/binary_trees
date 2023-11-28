#include "binary_trees.h"

/**
 * binary_tree_is_root - This function will check if a node is a root.
 *
 * @node: this is the node to be checked
 * Return: if its a node it will return 1 else 0.
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
