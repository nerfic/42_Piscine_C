/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:09:10 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/06 18:46:58 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_nbr(int nombre)
{
	ft_putchar((nombre / 10) + '0');
	ft_putchar((nombre % 10) + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a != 100)
	{
		while (b != 100)
		{
			if (a < b)
			{
				ft_nbr(a);
				ft_putchar(' ');
				ft_nbr(b);
				if (a != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		a++;
		b = 0;
	}
}
