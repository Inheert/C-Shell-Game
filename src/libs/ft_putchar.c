/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_putchar.c
*	
*	desc:	ft_putchar() is a copy of putchar() func,
*			it takes a char as argument and write it to the
*			referred file descriptor (actually: 1).
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}