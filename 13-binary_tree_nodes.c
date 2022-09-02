#include "binary_trees.h"
/**
 * binary_tree_nodes - counting the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to the node of the tree to count the
 * number of nodes
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
