#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as the left child.
 * @parent: Origin node of creation.
 * @value: Data the node holds.
 *
 * Return: Left inserted node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL || value == '\0') /*Error Check.*/
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL) /*Error Check.*/
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL) /*Insertion to the left.*/
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
