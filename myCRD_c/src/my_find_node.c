/*                                                                                                                                                                                                                                                   
** ./my_find_node/                                                                                                                            
** File description:                                                                                                                          
**      Write a function named my_find_node that returns the address of the first node occurence, which contains data equal to the reference \
data. If no such node is found, NULL should be returned.                                                                                      
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "my_struct.h"

linked_list_t *my_find_node(linked_list_t *list, const int data_ref)
{
	while (list != NULL) {
		if (list->data == data_ref)
			return (list);
		list = list->next;
	}
	return (NULL);
}
