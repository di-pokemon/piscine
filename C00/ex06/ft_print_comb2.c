/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:44:37 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/09/19 18:47:38 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int n1, int n2)
{
	ft_putchar((n1 / 10) + '0');
	ft_putchar((n1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((n2 / 10) + '0');
	ft_putchar((n2 % 10) + '0');
	if (n1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_numbers(n1, n2);
			n2++;
		}
		n1++;
	}
}
