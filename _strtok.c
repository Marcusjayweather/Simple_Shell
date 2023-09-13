#include "main.h"

/*_strtok - responsible for tokenizing the string
 * using delimeters
 * @buffer: buffer
 *
 * Return: argv or -1 in case of a failure
 */
char *_strtok(char *buffer)
{
	int *buffer_size = READ_BUF_SIZE;
	int num_tokens;
	char **argv;
	char *token;
	int *i;
	char delim = " \t\r\n\a"
	

	if(!argv)
	{
		print("memory allocation error\n");
		exit(EXIT_FAILURE);
	}
	_strcpy(buffer_cpy, buffer);

	token = strkok(buffer, delim);

	while(token != NULL)
	{
		argv[i] = token;
		i++;
	}
	if(i >= buffer_size)
	{
		buffer_size += READ_BUF_SIZE;
		buffer_size = realloc(tokens, sizeof(char *) * buffer_size);
		if (!argv)
		{
			print("memory allocation error\n");
			exit(EXIT_FAILURE);
		}
	}
		argv = strtok(NULL, delim);

	}
	argv[i] = NULL;
	return (argv);

}
