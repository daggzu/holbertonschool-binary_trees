#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node in binary tree.
 * @node: pointer to the node to find uncle.
 *
 * Return: uncle of node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

/*Checking if left parent has right parent.*/
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}

	else
	{
		return (node->parent->parent->left);
	}
}
