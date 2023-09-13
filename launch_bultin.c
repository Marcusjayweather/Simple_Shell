#include "shell.h"
/* builtin_execute - lauches or execute a builtin or a process
 * check if the command enter is simialiar to builtin
 *
 * @argv: command
 * Return: fork process in case the command does not match
 */

int builtin_execute(char **argv)
{
	int i;

	if (argv[0] == NULL)
	{
		/*empty command was entered*/
		return (1);
	}
	for(i = 0; i < numb_builtins(); i++)
	{
		if(_strcmp(argv[0], builtin_str[i]) == 0)
		{
			return(*builtin_function[i])(argv);
		}
		return _fork(argv);
	}
}


