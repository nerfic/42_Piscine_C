/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaudall <bjaudall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 18:19:09 by bjaudall          #+#    #+#             */
/*   Updated: 2017/07/23 09:29:23 by bjaudall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = -1;
	while (i++ < argc)
		dest = (char*)malloc(sizeof(char) * (ft_strlen(argv[1] + 1)));
	if (!dest)
		return (NULL);
	i = 0;
	k = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			dest[k++] = argv[i][j++];
		if (i < argc - 1)
			dest[k++] = '\n';
		else
			dest[k] = '\0';
	}
	return (dest);
}
