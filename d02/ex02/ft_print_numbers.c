/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:20:54 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/06 18:56:43 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int chiffre;

	chiffre = 48;
	while (chiffre <= 57)
	{
		ft_putchar(chiffre);
		chiffre++;
	}
}
