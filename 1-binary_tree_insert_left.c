#include "binary_tre.h"

/**
 * binary_tree_insert_left -insert a new node to the left of the parent
 * @parent: the root node
 * @value: the value of the node to be inserted
 * Description - If parent already has a left-child, the new node
 *			must take its place and the left-child must
 *			be set as the left-child of hte new node
 *
 * Return: Always 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_new;

	if (parent == NULL)
		return (NULL);

	insert_new = malloc(sizeof(binary_tree_t));

	if (!insert_new)
		return (NULL);

	insert_new->n = value;
	insert_new->parent = parent;
	insert_new->left = parent->left;
	insert_new->right = NULL;

	if (insert_new->left != NULL)
		insert_new->left->parent = insert_new;

	return (insert_new);
}
