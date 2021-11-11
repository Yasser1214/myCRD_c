/*                                                                   
** my_putstr/                                                                   
** File description:                                                            
**      Write a function that displays, one-by-one, the characters of a string using pointers                                                                  
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_putstr(const char *str)
{
	int i = 0;
	
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}
