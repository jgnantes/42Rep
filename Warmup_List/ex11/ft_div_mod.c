/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:02:46 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/08 15:08:12 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int 	main(void)
{
	int	division, modulus;

	ft_div_mod(4, 2, &division, &modulus);
	printf("division = %d\n", division);
	printf("modulus = %d\n", modulus);
	return(0);
}
*/
