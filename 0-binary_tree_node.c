#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Allocate memory for the new node
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL) {
        // Failed to allocate memory
        return NULL;
    }

    // Initialize the new node
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
