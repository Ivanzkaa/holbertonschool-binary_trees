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

	if (tree->left != NULL && tree->right != NULL)
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_height - getting the heigth of the binary tree
 * @tree: pointer to the root node of the tree to measure
 * the heigth
 * Return: the heigth of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_heigth = 0;
	size_t right_heigth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_heigth = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_heigth = binary_tree_height(tree->right) + 1;

	if (left_heigth > right_heigth)
		return (left_heigth);
	else
		return (right_heigth);
}
