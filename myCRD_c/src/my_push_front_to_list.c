/*                                            
** my_push_front_to_list/                                                       
** File description:                                                            
**      Write a function named my_push_front_to_list that inserts the new node \
with data value at the beginning of the list. The address of the list's first n\
ode is returned.                                                                
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "my_struct.h"

linked_list_t *my_push_front_to_list(int key, int value, linked_list_t *list) 
{
	linked_list_t *node = malloc(sizeof(*node));	
	
	node->data = key;
	node->data2 = value;
	node->next = list;
	list = node;

	return node;
}
