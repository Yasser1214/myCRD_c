/*                                                                           
** space/                                                                       
** File description:                                                            
**      pgm returns 1 if char is space, returns 0 else.                         
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int space(char c)
{
	if (c == ' ') {
	        return (1);
	} else {
		return (0);
	}
}
