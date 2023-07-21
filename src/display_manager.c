/*
*	Authors: Théo CLAEREBOUDT
*	file name: display_manager.c
*	
*	desc:	this file manage all display/write needed during the 
*			execution of the program.
*/

#include "proto_base.h"

/*
*	char_selection() is used to select the good
*	character to show.
*/
char	char_selection(int i)
{
	if (i == 0)
		return ('/');
	else if (i == 1)
		return ('\\');
	else
		return ('-');
}

/*
* button_styling() is used to stylizing button (item and text centring, decoration character...)
*/
void	button_styling(char *text, int max_lengh)
{
	int len;
	int i;
	int white_space;

	len = ft_strlen(text) + 5;
	i = 0;
	white_space = max_lengh / 2 - ft_strlen(text) / 2;
	while (i < white_space && max_lengh != ft_strlen(text))
	{
		ft_putchar(' ');
		i++;
	}
	i = 0;
	while (++i < len)
		ft_putchar(char_selection(((len - i) % (len - 1))));
	ft_putchar('\n');
	i = 0;
	while (i < white_space && max_lengh != ft_strlen(text))
	{
		ft_putchar(' ');
		i++;
	}
	i = (len - ft_strlen(text)) / 2;
	while (--i >= 0)
		ft_putchar(' ');
	ft_putchars(text);
	ft_putchar('\n');
	i = 0;
	while (i < white_space && max_lengh != ft_strlen(text))
	{
		ft_putchar(' ');
		i++;
	}
	i = 0;
	while (++i < len)
		ft_putchar(char_selection(i % (len - 1)));
	ft_putchars("\n\n");
}

/*
*	display_start_menu() write on the console the principal
*	menu of the program.
*/
void	display_start_menu(t_menu_comp *menu)
{
	int i;
	int max_lengh;

	i = 0;
	max_lengh = 0;
	while (i < menu->size)
	{
		if (menu->data[i].size > max_lengh)
			max_lengh = menu->data[i].size;
		i++;
	}
	i = 0;
	while (i < menu->size)
	{
		if (menu->data[i].selected)
		{
			printf("\033[1;31m");
		}
		button_styling(menu->data[i].name, max_lengh);
		if (menu->data[i].selected)
			printf("\033[0m");
		i++;
	}
}

/*
*	no_display() is used when the selected menu is not valid.
*/
void	no_display(void)
{
	ft_putchars("Nothing was found, please enter a valid argument.");
}

/*
*	display() is the shared function used to write an existing menu on the console.
*/
void	display(int disp, t_menu_comp *menu)
{
	if (disp == 1)
		display_start_menu(menu);
	else
		no_display();
}
