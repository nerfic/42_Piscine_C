/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:09:06 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/13 10:04:09 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_upper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_upper(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
