/*                                                     
** my_getnbr/                                                                   
** File description:                                                            
**      Write a function that parses a number from a string representation taken as parameter and returns it.                                                  
*/

#include <stdio.h>
#include <unistd.h>

int my_getnbr(const char *str)
{
	int i = 0;
	int nbr = 0; 
	int neg = 0; 
	
	if (str[0] == '-') {
		neg = 1;
		i++; 
	}	
	while (str[i] != '\0') {
		if ((str[i] >= 48) || (str[i] <= 57)) {
			nbr += str[i] - 48; 
			nbr *= 10; 
		}
		i++; 
	}
	nbr /= 10; 	
	if (neg == 1) {
		return (nbr * (-1));
	} else {
		return (nbr);
	}
}
