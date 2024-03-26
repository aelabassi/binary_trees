#include "binary_trees.h"

/**
* binary_tree_insert_right -  add a node at the
* left of the parent
* @parent: parent of the node
* @value: data
* Return: new node at the right
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (!node)
	{
		return (NULL);
	}
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);

}
