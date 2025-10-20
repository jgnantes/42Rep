/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:36:34 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/13 16:36:36 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb <= 13)
	{
		if (nb == 0)
			return (1);
		if (nb < 0)
			return (0);
		factorial = nb;
		while (factorial > 1)
		{
			nb = nb * (factorial - 1);
			factorial--;
		}
		return (nb);
	}
	return (0);
}

/*
#include <stdio.h>
int main() 
{
  int n;
  
  n = ft_iterative_factorial(1);
  printf("%d\n", n);
  
  n = ft_iterative_factorial(0);
  printf("%d\n", n);
  
  n = ft_iterative_factorial(-1);
  printf("%d\n", n);
}
*/
