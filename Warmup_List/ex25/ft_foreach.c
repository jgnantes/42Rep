/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:39:02 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/16 17:39:04 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	number;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr((int)(n / 10));
	number = 48 + (char)(int)(n % 10);
	write(1, &number, 1);
}

int	main(void)
{
	int tab[3] = {1, 2, 3};
	ft_foreach(tab, 3, &ft_putnbr);
}
*/
