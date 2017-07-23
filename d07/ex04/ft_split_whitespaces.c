/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 12:08:12 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/23 09:46:37 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char *str, int s, int len)
{
	char	*dest;
	int		count;

	count = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (count < len)
	{
		dest[count] = str[s];
		s++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int		countword(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		else
		{
			count++;
			while (str[i] && (str[i] != ' ' && str[i] != '\n'
						&& str[i] != '\t'))
				i++;
		}
	}
	return (count);
}

int		lenword(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (countword(str) + 1))))
		return (NULL);
	if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		tab[j] = ft_strsub(str, i, lenword(str + i));
		j++;
		i++;
	}
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				tab[j++] = ft_strsub(str, i, lenword(str + i));
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
