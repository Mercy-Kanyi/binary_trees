#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_insert_right -
 *
=======
 * binary_tree_insert_right - function name
 * @parent: binary t
 * @value: something
>>>>>>> 41bf5c8a4017ba9ee07c379725853a59ad7b8391
 * Return: whatever
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node_right;

if (parent == NULL)
return (NULL);

node_right = binary_tree_node(parent, value);
if (node_right == NULL)
return (NULL);
if (parent->right)
{
parent->right->parent = node_right;
node_right->right = parent->right;
}
parent->right = node_right;
return (node_right);
}
