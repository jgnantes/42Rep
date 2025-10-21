/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:19:09 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:16 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        size_t  i;
	unsigned char	temp[n];
        unsigned char   *d;
        const unsigned char     *s;

        d = (unsigned char *)dest;
        s = (const unsigned char *)src;
        i = 0;
        while (i < n)
        {
                temp[i] = s[i];
               	i++;
        }
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
        return (dest);
}
