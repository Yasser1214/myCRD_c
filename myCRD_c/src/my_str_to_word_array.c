/*                                                                                                                         
** my_str_to_word_array/                                                        
** File description:                                                            
**      Write a function that splits a string into words. Separators will all be non-alphanumeric characters.                                                  
The function returns an array in which each cell contains the address of a string (representing a word).                                                       
The last cell must be NULL to terminate the array.                              
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "my.h"

int word_length(const char *str, int i)
{
        while (str[i] != '\0') {
                if (alphanum(str[i]) != 1)
                        return (i);
                i++;
        }
        return (i);
}


char **my_str_to_word_array(const char *str)
{
	char **words = malloc((n_words(str) + 1) * sizeof(const char *));
	int i = 0;
	int j = 0;
	int k = 0;

	
	while (j < n_words(str)){
		k = 0;
		words[j] = malloc((word_length(str, i) + 1) * sizeof(const char));
		
		while (str[i] != '\0' && alphanum(str[i]) != 0) {
			words[j][k] = str[i];
			k++;
			i++;
		}
		words[j][k] = '\n';
		words[j][k++] = '\0';
		i++;
		j++;
	}
	return (words);
}
