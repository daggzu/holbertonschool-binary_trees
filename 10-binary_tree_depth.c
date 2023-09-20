#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of binary tree.
 * @tree: pointer to the root of binary tree.
 *
 * Return: depth of binary tree.
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{

size_t depth = 0;

if (tree == NULL)
	return (0);

if (tree->parent != NULL)
{
	depth += 1 + binary_tree_depth(tree->parent);
/*Assign variable as depth of binary tree.*/
}

	return (depth);
}
