/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_displayer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:10:53 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/19 14:10:55 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_std(char *str, int std);

int	main(int argc, char **argv)
{
	int		file_desc;
	int		bytes_amount;
	char	buffer[1024];

	if (argc < 2)
		ft_putstr_std("File name missing.\n", 2);
	if (argc > 2)
		ft_putstr_std("Too many arguments.\n", 2);
	if (argc == 2)
	{
		file_desc = open(argv[1], O_RDONLY);
		if (file_desc == -1)
			ft_putstr_std("Cannot read file.\n", 2);
		bytes_amount = read(file_desc, buffer, sizeof(buffer));
		while (bytes_amount > 0)
		{
			write(1, buffer, bytes_amount);
			bytes_amount = read(file_desc, buffer, sizeof(buffer));
		}
		close(file_desc);
	}
}
