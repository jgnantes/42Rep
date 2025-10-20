all:
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_putchar.c
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strlen.c
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_putstr.c
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strcmp.c
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_swap.c
	ar rcs libft.a ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o

clean:
	rm -f *.o

fclean:
	rm -f *.o libft.a

re:
	make fclean
	make all
