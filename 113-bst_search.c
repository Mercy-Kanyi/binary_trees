#include "binary_trees.h"
/**
 * bst_insert -
 *
 * Return:
 * value: integer
 * tree: int
 * search: for thr tree
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL)
return (NULL);
if (tree->n == value)
return ((void *)tree);
if (tree->n > value)
return (bst_search(tree->left, value));
if (tree->n < value)
return (bst_search(tree->right, value));
return (NULL);
}
