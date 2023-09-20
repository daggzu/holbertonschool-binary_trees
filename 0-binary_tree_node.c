#include "binary_trees.h"

/**
 * binary_tree_node - Create new node in binary tree.
 * @parent: Origin node for creation.
 * @value: Data the node holds.
 *
 * Return: New node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t)); /*Allocate memory.*/

	if (new_node == NULL) /*Error Check.*/
	{
		return (NULL);
	}

	new_node->n = value; /*Content the node holds.*/
	new_node->parent = parent; /*Birthplace.*/
	new_node->left = NULL; /*No sibling node*/
	new_node->right = NULL; /*No sibling node.*/

	return (new_node);
}
