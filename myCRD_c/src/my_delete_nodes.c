/*                                                         
** ./my_delete_nodes/                                                           
** File description:                                                            
**      Write a function named my_delete_nodes that removes all nodes containin\
g data equal to the reference data.                                             
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "my_struct.h"

void my_delete_nodes(linked_list_t **list, const int data_ref)
{	
	linked_list_t *node = *list, *prev;
 
        if (node != NULL && node->data == data_ref) {
                *list = node->next;
        	free(node);
        	return;
        }
 
	while (node != NULL && node->data != data_ref) {
		prev = node;
		node = node->next;
       }
 
	if (node == NULL) {
        	return;
        }
 
	prev->next = node->next;
 
	free(node);
}
