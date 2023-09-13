#include "main.h"

/* _getline - reads the line the user entered
 *
 * Returns: Success buffer , -1 if EOF is entered
 */

char *_getline(void)
{
	char *buffer = NULL;
	int result;
	size_t str_size = 0;

	result = getline(&buffer, &size, stdin);

	if(result == -1 || result == EOF)
	{
		if(feof(stdin))
		{
			/*free memory function*/
			//return(-1);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}
	}
	return (buffer);
}
