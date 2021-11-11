/*                                                
** include/                                                                        
** File description:                                                            
**      my.h header file that contains the prototypes of all the needed functions.
*/

#ifndef MY_H_
#define MY_H_

#include "my_struct.h"

char *my_readline(void);

void my_putchar(char c);

void my_putstr(const char *str);

void my_putnbr(int n);

int my_getnbr(const char *str);

char *my_strcpy(char *dest, const char *src);

int my_strcmp(const char *s1, const char *s2);

int not_int(const char *str);

int alphanum(char c);

int space(char c);

int n_words(const char *str);

char **my_str_to_word_array(const char *str);

linked_list_t *my_push_front_to_list(int key, int value, linked_list_t *list);

int my_list_size(const linked_list_t *list);

linked_list_t *my_find_node(linked_list_t *list, const int data_ref);

void my_delete_nodes(linked_list_t **list, const int data_ref);

linked_list_t *my_crd(char* str, linked_list_t *list);

#endif /* MY_H_ */
