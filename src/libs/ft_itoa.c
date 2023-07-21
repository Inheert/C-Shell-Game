/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_itoa.c
*	
*	desc: 	ft_itoa() is a function used to convert an int to a char pointer and return it.
*/

#include "proto_base.h"

// IMPROVEMENT: allocate the char * in this file without using ft_strncpy
// maybe add multiple version of the function
char 	*recursive(long nb, char *str)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		str[i] = '-';
		recursive(-nb, str);
	}
	else if (nb >= 10)
	{
		recursive(nb / 10, str);
		recursive(nb % 10, str);
	}
	else
	{
		while (str[i] != '\0')
			i++;
		str[i] = nb + 48;
	}
	return (str);
}

char 	*ft_itoa(int nb)
{
	char 	*str;

	str = ft_strncpy("\0", 11);
	str = recursive((long)nb, str);
	return (str);
}