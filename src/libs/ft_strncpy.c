/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_strncpy.c
*	
*	desc:	ft_strncpy() is a copy of strncpy() with some enhancement,
*			the function take a char pointer as argument and an int, 
*			create a copy with the lenght given by the second argument
*			and return it, the copy is allocated and null terminated.
*/

#include <stdlib.h>

char	*ft_strncpy(char *src, int n)
{
	char	*cpy;
	int  	i;

	cpy = (char *)malloc((n + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		cpy[i] = src[i];
		i++;
	}
	while (i < n)
	{
		cpy[i] = '\0';
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}