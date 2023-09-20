#include "binary_trees.h"

/**
 * binary_tree_postorder - traversing post-orderly through structure.
 * @tree: pointer to the root of binary tree.
 * @func: function pointer to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
/*Post-orderly traverse to the left subtree.*/

	binary_tree_postorder(tree->right, func);
/*Post-orderly traverse the right subtree.*/

	func(tree->n); /*Call the function with the current node's value.*/
}
