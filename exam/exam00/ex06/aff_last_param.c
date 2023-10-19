/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:23:29 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/10/19 16:23:32 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}
