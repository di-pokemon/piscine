/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:23:38 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/10/19 16:23:52 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	l;

	l = 122;
	while (l >= 97)
	{
		if (l % 2 == 0)
			ft_putchar(l);
		else
			ft_putchar(l - 32);
		l--;
	}
	write(1, "\n", 1);
	return (0);
}
