#include "shell.h"

/* *
 * _strcmp - function that compares two string
 * 
 * @str1: string one
 * @str2: string two
 *
 * Return: Sucess 0.
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	while(str1[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}

	return (0);
}

/**
 * _strncat - concatenates two strings
 *
 * @destin: destination
 * @src: Source string
 *
 * Return: A concataneted string.
 */

char *_strncat(char *destin, char *src);
{
	int str1_len, i;
	i = 0;

	str1_len = _strlen(destin);

	while (src[i] != '\0')
	{
		destin[str1_len] = src[i];
		i++;
		str1_len
	}
	return (destin);
}

/**
 * _strdup - copies a string to a newly allocated memory
 *
 * @str: string
 *
 * Return: string copied
 */

char *_strdup(const char *str);
{
	char  *destin;
	int size, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	destin = malloc(sizeof(char) * size);

	if (destin == NULL)
	{
		return (NULL);
	}

	while(i < size)
	{
		*(destin + i) = *(str + i);
		i++;
	}
	return(destin);
}







