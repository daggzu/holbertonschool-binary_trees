#include "binary_trees.h"

/**
 * binary_tree_leaves - amount of leaves in binary tree.
 * @tree: pointer to the root of binary tree.
 *
 * Return: amount of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
