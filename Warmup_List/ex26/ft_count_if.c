/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:43:47 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/16 18:43:50 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}

/*
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ret;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ret = 1;
			i++;
		}
		else
		{
			ret = 0;
			break ;
		}
	}
	if (str[i] == '\0')
	{
		ret = 1;
	}
	return (ret);
}

#include <stdio.h>
int	main(void)
{
	int n;
	char* tab[4];
	tab[0] = "2";
	tab[1] = "1";
	tab[2] = "oxe";
	tab[3] = "42";
	
	n = ft_count_if(tab, &ft_str_is_numeric);
	printf("%d", n);
}
*/
