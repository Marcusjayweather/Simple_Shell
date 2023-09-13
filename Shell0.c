#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>


/* main	- super simple shell
 * 
 * Return: Success 0
 */
int main(int argc, char **argv)
{
	char *buffer = NULL;
	pid_t child_pid;
	size_t str_size = 0;
	ssize_t input;
	char *token;
	int i, status, num_token = 0;
	const char *delim = " \n";
	char *buffer_cpy = NULL;

	/*declaring arguments not used*/
	(void)argc;

	while(1)
	{
		write(1, "promt $$: ", 10);
		input = getline(&buffer, &str_size, stdin);
		if (input == -1 || input == EOF)
		{
                        printf("\n");
			return (-1);
		}
		buffer_cpy = malloc(sizeof(char)* input);
		if (buffer_cpy == NULL)
		{
			perror("Error");
			return (-1);
		}
		_strcpy(buffer_cpy, buffer);
		token = _strtok(buffer, delim);                                                                                                 
		while(token)                                                                                                                   
		{                                                                                                                              
			num_token++;                                                                                                           
			token = _strtok(NULL, delim);                                                                                           
		}                                                                                                                              
		num_token++;                                                                                                                   
		argv = malloc(sizeof(char *) * num_token);                                                                                                                             
		token = _strtok(buffer_cpy, delim);                                                                                             
                                                                                                                                               
		while(token)                                                                                                                   
		{                                                                                                                              
			argv[i] = malloc(sizeof(char) * _strlen(token);
			_strcpy(argv[i], token);					
			token = _strtok(NULL, delim);                                                                                          
			i++;                                                                                                                   
		}                                                                                                                              
		argv[i] = NULL;
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");                                                                                              
			}                                                                                                               
		}
		else                                                                               {                                                                                                                              
		wait(&status);                                     
		}                                                                                                            
		free(buffer_cpy);
		free(buffer);                                                                                                            
	}                                                                                                                                      
	return (0);  
}	
