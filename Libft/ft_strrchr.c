/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:14:21 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:28:24 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	if (s[0] == '\0')
		return ((char *)&s[0]);
	i = ft_strlen(s);
	while (s[i] != (char)c)
	{
		i--;
		if (s[i] == '\0' && c != 0)
			return (NULL);
	}
	return ((char *)&s[i]);
}
