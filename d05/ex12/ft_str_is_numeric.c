/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 16:33:23 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/13 10:01:21 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_num(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_num(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
