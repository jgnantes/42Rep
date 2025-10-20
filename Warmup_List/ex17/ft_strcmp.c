/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:47:46 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/11 16:14:51 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello World";
	int testcpy, testorg;

	testcpy = ft_strcmp(str1, str2);
	printf("%d \n", testcpy);
	testorg = strcmp(str1, str2);
	printf("%d \n", testorg);
}
*/
