#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checking if the tree
 * is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_depth + 1);

	if (binary_tree_depth(tree->left) != binary_tree_depth(tree->right))
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}

/**
 * binary_tree_depth - getting the depth of the tree
 * @tree: pointer to the node to measure the depth
 * Return: if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
