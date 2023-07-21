/*
*	Authors: Théo CLAEREBOUDT
*	file name: ft_strcmp.c
*	
*	desc:	ft_strcmp() is a copy of strcmp(), this function take 2 char pointers
*			as argument and return a negative number if *s1 is less than *s2,
*			a positive number if *s1 is superior than *s2 and 0 if s1 == s2.
*/

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}