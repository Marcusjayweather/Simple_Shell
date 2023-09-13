#include "shell.h"

/* builtin finctions*/

char *builtin_str[]
{
	"cd";
       	"help";
       	"exit";
}

int _cd(char **argv)
{
	if(argv[1] == NULL)
	{
		print("Error: expected command cd\n");
	}
	else
	{
		if(chdir(argv[1] != 0))
		{
			perror("Error:");
		}
	}
	return(1);
}
int _help(char **argv)
{
	int i;

	for(i = 0; i < num_builtins(); i++)
	{
		print(builtin_str[i]);
	}
	return (1);
}

int _exit(char **argv)
{
	return (0);
}

int num_builtins()
{
	return (sizeof(builtin_str)/sizeof(char *));
}

char (*builtin_functio[])(char **) =
{
	&_cd;
	&_help;
	_exit;
}

