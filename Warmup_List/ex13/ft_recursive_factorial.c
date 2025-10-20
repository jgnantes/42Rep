/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:44:44 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/13 16:44:45 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 13)
	{
		if (nb == 0)
			return (1);
		if (nb < 0)
			return (0);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

/*
#include <stdio.h>
int main() 
{
  int n;
  
  n = ft_recursive_factorial(4);
  printf("%d\n", n);
  
  n = ft_recursive_factorial(0);
  printf("%d\n", n);
  
  n = ft_recursive_factorial(-1);
  printf("%d\n", n);
}
*/
