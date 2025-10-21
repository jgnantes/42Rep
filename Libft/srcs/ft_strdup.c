/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:54:54 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/21 13:55:06 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	size_t	length;
	char	*dest;

	if (src == 0)
		return (0);
	length = (size_t)ft_strlen(src);
	dest = malloc(length + 1);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *string1 = "solta o ponto moulinette";
	char *string2 = "solta o ponto moulinette";
	
	printf("%s\n", ft_strdup(string1));
	printf("%s\n", strdup(string2));
}
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
