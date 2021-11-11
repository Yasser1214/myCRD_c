/*                                              
** my_crd/                                                                      
** File description:                                                            
**      program that returns 1 if the input char is only composed of integer ch\
aracters,  else returns 0.                                                      
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int not_int(const char *str)
{
	int i =0;
	int cpt = 0;
	
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			cpt = cpt;
		} else {
			cpt++;
		}
		i++;
	}
	
	if (cpt > 0) {
		return (1);
	} else {
		return (0);
	}
}
