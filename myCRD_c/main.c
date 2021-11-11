/*                                                                           
** my_crd/                                                                       
** File description:                                                            
**      Main file of the project my_crd                                         
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "src/my.h"
#include "src/my_struct.h"

int main(void) 
{
	linked_list_t *list = malloc(sizeof(*list));
	
	char *line; 
	line = "55 65";
	
	while (line != NULL) {	
		my_putstr("\n");	
		my_putstr("------ input -----: ");
		line = my_readline();
	
		my_putstr("------ output -----: ");
		list = my_crd(line, list);
		my_putstr("\n");
	}	
}
