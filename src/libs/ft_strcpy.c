/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_strcpy.c
*	
*	desc:	ft_strcpy() is a copy of strcpy() with some enhancement,
*			the function take a char pointer as argument, create a copy
*			of it and return it, the copy is allocated and null terminated.
*/

#include <stdlib.h>

int _ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	char	*cpy;
	int  	i;
	int 	len;

	len = _ft_strlen(src);
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}