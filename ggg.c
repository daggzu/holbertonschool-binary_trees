#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    // Allocate memory for the new node
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;

    // Initialize the new node
    new_node->n = value;
    new_node->parent = parent;
    new_node->right = NULL;

    // If parent already has a left child
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    else
        new_node->left = NULL;

    // Set the new node as the left child of parent
    parent->left = new_node;

    return new_node;
}
