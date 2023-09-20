#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree.
 * @tree: pointer to the root of binary tree.
 *
 * Return: height of binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Declaration of height variables.*/
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL) /*Error check if the tree doesn't exist.*/
		return (0);

	if (tree->left != NULL)
		left_height += 1 + binary_tree_height(tree->left);
			/*Assign left height of tree to variable.*/

	if (tree->right != NULL)
	right_height += 1 + binary_tree_height(tree->right);
		/*Assign right height of tree to variable.*/

/*Cool implementaion of if-else on a single line!*/
	return (left_height > right_height ? left_height : right_height);
}
