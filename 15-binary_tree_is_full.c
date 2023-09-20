#include "binary_trees.h"

/**
 * binary_tree_is_full - measures if binary tree is full.
 * @tree: pointer to the root of binary tree.
 *
 * Return: full measure of binary tree.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

/*If both left and right subtrees exits, check if they're full.*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

/*Result of full measure of left and right sub-trees.*/
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
