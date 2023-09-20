#include "binary_trees.h"

/**
 * binary_tree_size - measure size of binary tree.
 * @tree: pointer to the root of binary tree.
 *
 * Return: size of binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size += binary_tree_size(tree->left);
/*Assign left-size of tree to variable.*/

	if (tree->right != NULL)
		size += binary_tree_size(tree->right);
/*Assign right-size of tree to variable.*/

	return (size + 1); /*Adding plus 1 to the result.*/
}
