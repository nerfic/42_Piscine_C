/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:44:10 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/23 09:07:54 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;
	int m;

	m = min;
	tab = malloc(sizeof(int) * (max - min + 1));
	if (min >= max)
		return (0);
	i = 0;
	while (m < max)
	{
		tab[i] = min + i;
		i++;
		m++;
	}
	tab[i] = 0;
	return (tab);
}
