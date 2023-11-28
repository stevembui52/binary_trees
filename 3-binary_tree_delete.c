#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - A function to delete a binary
 *
 * @tree: This points the node to be deleted
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
