#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserting a node as the left-child
 * of another node
 * @parent: pointer to the node to insert the l-child in
 * @value: the value to store in the new node
 * Return: to a pointer to the vreated node or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	/*
	 * Ya aqui new_node absorbe el valor de la funcion anterior,
	 * para ya tenerlo aqui
	 */
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);

}
