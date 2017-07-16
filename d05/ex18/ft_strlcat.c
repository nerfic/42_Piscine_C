/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 07:45:21 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/13 10:07:36 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	l;

	while (dest[l])
	{
		l++;
	}
	while (src[i])
	{
		if (l < size - 1)
			dest[l] = src[i];
		l++;
		i++;
	}
	dest[l - 1] = '\0';
	return (l);
}
