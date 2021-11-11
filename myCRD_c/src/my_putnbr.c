/*                                                              
** my_putnbr/                                                                   
** File description:                                                            
**      Write a function that displays the number given as a parameter. It must be able to display all the possible values of an int.                          
*/

#include <stdio.h>
#include <unistd.h>

#include "my.h"

void my_putnbr(int n)
{
	if (n < 0) {
		my_putchar('-');
		n = n * (-1); 
	}
	if (n <= 9) {
		my_putchar(n + 48);
	} else {
		my_putnbr(n / 10); 
		my_putnbr(n % 10); 
	}
}
