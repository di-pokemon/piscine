/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:56:08 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/09/28 13:36:41 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb > 0)
	{
		while (sqr <= 46360)
		{
			if (ft_power(sqr, 2) == nb)
				return (sqr);
			sqr++;
		}
	}
	return (0);
}
