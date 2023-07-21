/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_putchars.c
*	
*	desc:	ft_putchars() take a char pointer as argument,
*			this function is used to display a string chain using
*			ft_putchar. 
*/

#include "proto_base.h"

void	ft_putchars(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}