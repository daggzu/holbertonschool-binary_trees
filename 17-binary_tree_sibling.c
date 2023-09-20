#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node in binary tree.
 * @node: pointer to the node to find sibling.
 *
 * Return: sibling of node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);


	if (node->parent->left == node) /*Check if left node has a right sibling.*/
	{
		return (node->parent->right);
	}

	else
	{
		return (node->parent->left);
	}
}
