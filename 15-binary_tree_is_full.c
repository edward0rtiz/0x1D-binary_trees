#include "binary_trees.h"
/**
 * binary_tree_is_full - function that says if a tree is full or not
 * a tree is full if it has tow or none children
 * @tree: tree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = tree->left ? binary_tree_is_full(tree->left) : 0;
		right = tree->right ? binary_tree_is_full(tree->right) : 0;
		if (left == right)
			return (1);
		else
			return (0);
	}
}
