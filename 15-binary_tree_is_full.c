#include "binary_trees"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree -  is a pointer to the root node of the tree to check.
 * Return - returns 0 if the function is NULL otherwise return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree);
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if ((tree->left) && (tree->right))
		return 1;
}
