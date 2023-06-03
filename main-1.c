#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main -entry pint
 * Returns: 0
 */


int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 84);
	root->right = binary_tree_node(root, 92);
	root->left = binary_tree_node(root, 80);

	binary_tree_print(root);
	printf("\n");

	binary_tree_insert_left(root, 60);
	binary_tree_insert_left(root->right, 24);
	binary_tree_print(root);

	return (0);
}
