/*                                                                                                                       
** my_struct.h/                                                                   
** File description:                                                            
**      Structure's prototype used for the type linked_list_t.               
*/

#ifndef _MYSTRUCT_H_
#define _MYSTRUCT_H_

typedef struct linked_list
{
	int data;
	int data2;
	struct linked_list *next;

} linked_list_t;

#endif /* #ifndef _MYSTRUCT_H_ */
