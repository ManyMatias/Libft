/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:28:47 by mmany             #+#    #+#             */
/*   Updated: 2018/11/21 22:29:13 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	total_size(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		count = count + j;
		if (i > 1)
			count++;
		i++;
	}
	return (count);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*ptr;
	int		i;
	int		j;
	int		c;
	int		count;

	i = 0;
	c = 0;
	count = total_size(argc, argv);
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	while (++i < argc)
	{
		j = 0;
		if (i > 1)
			ptr[c++] = '\n';
		while (argv[i][j] != '\0')
			ptr[c++] = argv[i][j++];
	}
	ptr[c] = '\0';
	return (ptr);
}
