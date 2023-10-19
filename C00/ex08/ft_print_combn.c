/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhirwa <dmuhirwa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:28:59 by dmuhirwa          #+#    #+#             */
/*   Updated: 2023/09/19 18:47:58 by dmuhirwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int arr[], int size)
{
	int	i;

	i = size - 1;
	while (i)
	{
		if (arr[i] == arr[i - 1] + 1)
			i--;
		else
			break ;
	}
	return (i - 1);
}

void	reset(int arr[], int size, int index)
{
	arr[index]++;
	index++;
	while (index < size)
	{
		arr[index] = arr[index - 1] + 1;
		index++;
	}
}

void	print_numbers(int arr[], int size)
{
	int	i;

	i = 0;
	while (i < size)
		ft_putchar(arr[i++] + '0');
	if (arr[0] < 10 - size)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (arr[0] <= 10 - n)
	{
		if (arr[n - 1] < 9)
		{
			print_numbers(arr, n);
			arr[n - 1]++;
		}
		else
		{
			print_numbers(arr, n);
			i = check(arr, n);
			if (i < 0)
				break ;
			reset(arr, n, i);
		}
	}
}
