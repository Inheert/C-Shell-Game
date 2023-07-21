/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_strlen.c
*	
*	desc:	ft_strlen() is a copy of strlen(), it take a char pointer as argument
*			and return its length.
*/

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
