#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Value stored in the node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    struct binary_tree_s *parent;
    int value;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    
    if (new_node == NULL)
        return NULL;

    new_node->parent = parent;
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

