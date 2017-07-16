/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 17:55:31 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/15 12:29:25 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int l;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		l = 0;
		while (str[i + l] == to_find[l])
		{
			if (to_find[l + 1] == '\0')
				return (&str[i]);
			l++;
		}
		i++;
	}
	return (0);
}
