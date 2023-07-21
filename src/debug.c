/*
*	Authors: Théo CLAEREBOUDT
*	file name: debug.c
*	
*	desc: 	this file manage a debug system to give a better
*			view of whats happening during an event, a loop or something else.
*/

#include "proto_base.h"

typedef struct s_debug
{
	int active;
	int is_dynamically_allocated;
}	t_debug;

t_debug _debug;

void set_debug(int active)
{
	if (!_debug.is_dynamically_allocated)
	{
		_debug.is_dynamically_allocated = 1;
	}
	if (active == 1)
		_debug.active = 1;
	else
		_debug.active = 0;
} 

int get_debug()
{
	return (_debug.active);
}

void write_debug(char *text, char *value, int is_allocated)
{
	if (_debug.active != 1)
		return ;

	ft_putchars(text);
	ft_putchars(value);
	if (is_allocated == 1)
		free(value);
}