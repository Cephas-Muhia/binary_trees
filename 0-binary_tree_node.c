<<<<<<< HEAD
#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
=======
nclude "binary_trees.h"

/**
 *  * binary_tree_node - Create a binary node
 *   * @parent: node parent
 *    * @value: Value of the node
 *     * Return: the new node
 *      */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node;

			new_node = malloc(sizeof(binary_tree_t));
				if (new_node == NULL)
						{
									return (NULL);
										}
					new_node->n = value;
						new_node->parent = parent;
							new_node->left = NULL;
								new_node->right = NULL;
									return (new_node);
>>>>>>> a2b7b8dfa3632563e2b88690a8cf18a0e1f6df05
}
