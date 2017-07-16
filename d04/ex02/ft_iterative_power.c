/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:57:47 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/12 11:56:57 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0 || power > 31)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			power = power - 1;
			i = i * nb;
		}
	}
	if (i < -2147483648 || i > 2147483647)
		return (0);
	else
		return (i);
}
