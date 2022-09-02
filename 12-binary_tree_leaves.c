#include "binary_trees.h"
/**
 * binary_tree_leaves - counting the leaves in
 * a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of leaves
 * Return: numbers of the leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf = 0;
	size_t right_leaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
	{
		left_leaf = binary_tree_leaves(tree->left);
		right_leaf = binary_tree_leaves(tree->right);

		return (left_leaf + right_leaf);
	}
}
