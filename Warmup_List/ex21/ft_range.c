/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:51:16 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/14 12:51:21 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>
int main(void)
{
	int	*list;
	int	min, max, size;
	min = -2;
	max = 5;
	size = max - min;
	list = ft_range(min, max);
	
	int i = 0;
	while (i < size)
	{
		printf("%d ", list[i]);
		i++;
	}
	return(0);
}
*/
