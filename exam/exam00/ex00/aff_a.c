/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:22:12 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/10/19 16:22:15 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
