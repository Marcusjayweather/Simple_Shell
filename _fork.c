#include "shell.h"

/* fork_cmd - creates a child PId
 * @argv: vector arguments
 *
 * Return: Success 1, failure -1
 */

void fork_cmd(info_t *, char *buffer)
{
	pid_t child_pid, wpid;
	int status;

	child_pid = fork();
	if (child_pid == 0)
	{
		if(execve(info->argv[0], info->argv, environ) == -1)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
			free_double_p((void *) info->argv);
		}

		if (info ->path != NULL)
		{
			free(info->path);
			info->path = NULL
		}
		free(info);
		exit(1);
	}
	else if(child_pid < 0)
	{
		perror("Error:");
	}
	else
	{
		do {
			wpid = waitpid(child_pid, &status,WUNTRACED);
		}
		while(!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return(1)

}
