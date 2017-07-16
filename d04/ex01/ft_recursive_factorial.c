/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:46:20 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/11 13:34:25 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb >= 13))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	if ((nb > 1) && (nb <= 12))
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
