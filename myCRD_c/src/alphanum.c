/*                                            
** alphanum/                                                                    
** File description:                                                            
**      pgm that returns 1 if char is alphanumerical, else returns 0.           
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
	        return (1);
	} else {
		return (0);
	}
}
