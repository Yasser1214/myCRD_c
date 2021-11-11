/*                                             
** my_crd/                                                                     
** File description:                                                            
**      program that allow storing, deleting and retrieving values associated w\
ith keys.                                                                       
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "my.h"
#include "my_struct.h"

linked_list_t *my_crd(char* str, linked_list_t *list)
{	
	unsigned int key;
	unsigned int value;
	char **input;
	
	if (list == NULL) {
		exit (0);
	}
	
	/*********** if only Key ***********/
	if (n_words(str) == 1) {	
		key = my_getnbr(str);
		/*********** Key found ***********/
		if (my_find_node(list, key) != NULL) {
			value = my_find_node(list, key)->data2;
			my_putnbr(value);
		/*********** Key not found ***********/
		} else {
			value = my_getnbr("-1");
			my_putnbr(value);
		}
	}
	/*********** if Key + Value  ***********/
	else if (n_words(str) == 2) {
		input = my_str_to_word_array(str);
		key = my_getnbr(input[0]);
		value = my_getnbr(input[1]);
		
		/*********** Key is integer ***********/
		if (not_int(input[0]) == 0) {
			/*********** Value is integer ***********/
			if (not_int(input[1]) == 0) {
				/*********** Insert ***********/
				if (my_find_node(list, key) == NULL) {
					list = my_push_front_to_list(key, value, list);
					my_putnbr(value);
				/*********** Update ***********/
				} else {
					my_find_node(list, key)->data2 = value;
					my_putnbr(value);
					}
				}
			/*********** Delete ***********/
			else if (my_strcmp(input[1], "D") == 0) {
				if (my_find_node(list, key) == NULL) {
					value = my_getnbr("-1");
					my_putnbr(value);
				} else {
					my_putnbr(my_find_node(list, key)->data2);
					my_delete_nodes(&list, key);
				}
			/*********** Key is nor integer nor D ***********/
			} else {
				value = my_getnbr("-1");
				my_putnbr(value);
			}	
		}
		/*********** Key is not integer  ***********/
		else if (not_int(input[0]) == 1) {
			value = my_getnbr("-1");
			my_putnbr(value);
		}
	/*********** Other cases ***********/
	} else {
		value = my_getnbr("-1");
		my_putnbr(value);
	}	
	return (list);	
}
