/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:54:09 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/13 16:54:14 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int			low;
	int			mid;
	int			high;
	long long	result;

	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	low = 0;
	high = nb / 2;
	while (low <= high)
	{
		mid = low + ((high - low) / 2);
		result = (long long) mid * mid;
		if (result == nb)
			return (mid);
		else if (result < nb)
			low = mid + 1;
		else if (result > nb)
			high = mid - 1;
	}
	return (0);
}
/*
#include <stdio.h>
int	main() {
	
	int n;
	
	n = ft_sqrt(625);
	printf("%d\n", n);
	
	n = ft_sqrt(1);
	printf("%d\n", n);
	
	n = ft_sqrt(4);
	printf("%d\n", n);
	
	n = ft_sqrt(-1);
	printf("%d\n", n);
	
	return (0);
}
*/
