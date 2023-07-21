/*
*	Authors: Théo CLAEREBOUDT
*	file name: menu_buttons.c
*	
*	desc:	This file is used to create menu and all its items.
*/

#include "proto_base.h"

t_menu_comp *create_menu(char **items, t_menu_comp *menu)
{
	int i;

	i = 0;
	while (ft_strlen(items[i]) != 0)
		i++;
	menu = (t_menu_comp *) malloc(sizeof(t_menu_comp));
	menu->data = (t_menu_button *) malloc(sizeof(t_menu_button) * i);
	menu->size = i;
	i = 0;
	while(ft_strlen(items[i]) != 0)
	{
		menu->data[i].name = ft_strcpy(items[i]);
		menu->data[i].size = ft_strlen(items[i]);
		if (i == 0)
		{
			menu->data[i].selected = 1;
			menu->selected = i;
		}
		else
			menu->data[i].selected = 0;
		i++;
	}
	return (menu);
}

t_menu_comp *get_root_item()
{
	t_menu_comp	*root_menu;
	char		*items[75] = {
		"Character information",
		"Explore",
		"Upgrade",
		"Exit",
		"\0"
	};

	root_menu = NULL;
	return (create_menu(items, root_menu));
}