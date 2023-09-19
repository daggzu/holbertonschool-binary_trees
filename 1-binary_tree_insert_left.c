#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
    new_node->left = NULL;

    // If parent already has a right child
    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    else
        new_node->right = NULL;

    // Set the new node as the right child of parent
    parent->right = new_node;

    return new_node;
}

