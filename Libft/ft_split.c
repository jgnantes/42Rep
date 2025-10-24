/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:07:27 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 17:07:34 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	split_len;
	size_t	i;
	size_t	str_index;
	size_t	char_index;

	split = NULL;
	i = 0;
	str_index = 0;
	while (s[i] != '\0')
	{
		split_len = 0;
		while (s[i] != c)
			split_len++;
		i = i - split_len;
		split[str_index] = malloc(split_len + 1);
		char_index = 0;
		while (char_index < split_len)
			split[str_index][char_index++] = s[i++];
	}
	split[i] = NULL;
	return (split);
}
