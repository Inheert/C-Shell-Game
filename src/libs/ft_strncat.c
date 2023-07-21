/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_strncat.c
*	
*	desc:	ft_strncat() is a copy of strncat(), it take 3 arguments,
*			the firt two are char pointer (dest, src) and the last one
*			is an int (used to limit of char copied from src to dest).
*			The function return dest.
*/

#include "stdio.h"

char	*ft_strncat(char *dest, char *src, int size)
{
	int i;

	i = 0;
	printf("OK\n");
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}