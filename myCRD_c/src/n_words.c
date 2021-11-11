/*                                                                           
** n_words/                                                                     
** File description:                                                            
**      pgm that count the number of words in a string using space as delimiter\
.                                                                               
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "my.h"

int n_words(const char *str)
{
	int	i = 0;
	int	delim = 0;
	
	while (str[i] != '\0') {
		if (space(str[i]) == 1) {
			delim++;
		}
		i++;
	}
	return (delim + 1);
}
