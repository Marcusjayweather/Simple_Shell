#include "main.h"

/*_strcpy - copies a string
 * Return : None
 */

char *_strcpy(char *destin, char *source)
{
	int i = 0;
	if (destin == NULL)
	{
		return NULL;
	}
	while(source[i] !='\0')
	{
		destin[i] = source[i]
		i++;
	}
	destin[i] = '\0';
}


