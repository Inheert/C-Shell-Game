#ifndef PROTO_BASE_H
# define PROTO_BASE_H

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <string.h>

// External prototype
int 	system(const char *command);
unsigned int sleep(unsigned int nb_sec);

// Libs prototype
void	ft_putchar(char c);
void	ft_putchars(char *c);
int  	ft_strlen(char *str);
char	*ft_strcpy(char *src);
char	*ft_strncpy(char *src, int n);
int 	ft_strcmp(char *s1, char *s2);
char	*ft_strncat(char *dest, char *src, int size);
char 	*ft_itoa(int nb);

typedef struct s_menu_button
{
	char 	*name;
	int 	size;
	int 	selected;
}	t_menu_button;

typedef struct s_menu_comp
{
	t_menu_button	*data;
	int  			size;
	int  			selected;
}	t_menu_comp;

typedef struct s_player 
{
	char *name;

} player;

// App prototype
void 		set_debug(int active);
int 		get_debug();
void 		write_debug(char *text, char *value, int is_allocated);
void		game_manager(void);
void		display(int disp, t_menu_comp *menu);
char 		*key_listening(char *key_map);
void		key_action(char *key_map, t_menu_comp *menu);
t_menu_comp *get_root_item();

#endif