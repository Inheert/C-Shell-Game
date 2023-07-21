/*
*	Authors: Théo CLAEREBOUDT
*	file name: game_manager.c
*	
*	desc:	This file manage the whole program, it contain an infinite loop,
*			each loop corresponds to a player input or event.
*			The console is clear each loop to simulate the game.			
*/

#include "proto_base.h"

void	game_manager(void)
{
	int  		i;
	char 		*key;
	t_menu_comp	*menu;

	i = 0;
	key = (char *) malloc(sizeof(char) * 20);
	menu = get_root_item();
	while (1)
	{
		i++;
		system("clear");

		write_debug("Loop: ", ft_itoa(i), 1);
		write_debug("	Last key pressed: ", key, 0);
		write_debug("", "\n", 0);
		display(1, menu);
		key = key_listening(key);
		key_action(key, menu);
	}
}