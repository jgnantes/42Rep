all:
	cc -Wall -Wextra -Werror -c ft_putstr_std.c -o ft_putstr_std.o
	cc -Wall -Wextra -Werror -c file_displayer.c -o file_displayer.o
	cc -Wall -Wextra -Werror -o ft_display_file file_displayer.o ft_putstr_std.o

clean:
	rm -f file_displayer.o
	rm -f ft_putstr_std.o

fclean: clean
	rm -f ft_display_file

re: fclean all
