/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:24:31 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/10/19 16:24:34 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	found;

	found = 0;
	if (ac == 2)
	{
		while (*av[1] && !found)
		{
			if (*av[1] == 'z')
			{
				write(1, av[1], 1);
				found++;
				break;
			}
			av[1]++;
		}
		if (!found)
			write(1, "z", 1);
					
	}
	else
		write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
