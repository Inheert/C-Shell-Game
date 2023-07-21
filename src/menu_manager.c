/*
*	Authors: Théo CLAEREBOUDT
*	file name: menu_manager.c
*	
*	desc:	menu_manager manage all things related to user input
*			when he is on a menu.
*/

#include "proto_base.h"

/*
*	key_listening() is used to catch a keyboard input and return
*	a char pointer wich contains custom data to use later in the program.
*/
char *key_listening(char *key_map)
{
	char	c;

	c = getch();
	if (c == -32)
	{
		c = getch();
		if (c == 72)
			key_map = "UP";
		else if (c == 75)
			key_map = "LEFT";
		else if (c == 77)
			key_map = "RIGHT";
		else if (c == 80)
			key_map = "DOWN";
	}
	else if (c == 13)
			key_map = "ENTER";
	else if (c == 48)
		exit(0);
	else
	{
		key_map = "Not define";
	}
	return (key_map);
}

/*
*	key_navigation() actualize the int var 'selected' 
*	of the actual menu and older/new item struct (t_menu_comp and t_menu_button).
*/
void	key_navigation(int key_map, t_menu_comp *menu)
{
	menu->data[menu->selected].selected = 0;
	if (key_map == 0)
	{
		if (menu->selected - 1 < 0)
			menu->selected = menu->size - 1;
		else
			menu->selected = menu->selected - 1;
	}
	if (key_map == 1)
	{
		if (menu->selected + 1 >= menu->size)
			menu->selected = 0;
		else
			menu->selected = menu->selected + 1;
	}
	menu->data[menu->selected].selected = 1;
}

/*
*	key_action() is used to trigger function from keyboard input.
*/
void	key_action(char *key_map, t_menu_comp *menu)
{
	if (ft_strcmp(key_map, "UP") == 0 || ft_strcmp(key_map, "LEFT") == 0)
		key_navigation(0, menu);
	else if (ft_strcmp(key_map, "DOWN") == 0 || ft_strcmp(key_map, "RIGHT") == 0)
		key_navigation(1, menu);
}