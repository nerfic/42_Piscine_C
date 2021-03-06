/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 16:02:15 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/13 10:00:23 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= 'a') && (c <= 'z'))
		return (2);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_alpha(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
