/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:49:06 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/15 10:50:59 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	integer;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	integer = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		integer = (integer * 10) + (str[i] - '0');
		i++;
	}
	if (j == 1)
		sign = -1;
	return (integer * sign);
}

/*
#include <stdio.h>
int	main(void)
{
	int digit_i;
	char digit_c[] = "       +++--+---464t5";

	digit_i = ft_atoi(digit_c);
	printf("%d\n", digit_i);
	
	
	int digit_i2;
	char digit_c2[] = "       -464t5";
		
	digit_i2 = atoi(digit_c2);
	printf("%d\n", digit_i2);
}
*/
