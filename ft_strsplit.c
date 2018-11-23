/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 13:38:58 by mmany             #+#    #+#             */
/*   Updated: 2018/11/21 22:38:38 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_words(char const *s, char c)
{
	int		nbwords;
	int		new;
	int		i;

	new = 0;
	nbwords = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (new == 1 && s[i] == c)
			new = 0;
		if (new == 0 && s[i] != c)
		{
			new = 1;
			nbwords++;
		}
		i++;
	}
	return (nbwords);
}

static int			lenght_word(char const *s, int i, char c)
{
	int size;

	size = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		size++;
	}
	return (size + 1);
}

static int			allocation(char const *s, int nbwords, char **end, char c)
{
	int	i;
	int	o;
	int	g;

	i = 0;
	g = 0;
	while (g < nbwords)
	{
		while (s[i] == c)
			i++;
		if (!(end[g] = malloc(sizeof(char) * lenght_word(s, i, c))))
			return (0);
		o = 0;
		while (s[i] != '\0' && s[i] != c)
		{
			end[g][o] = s[i];
			i++;
			o++;
		}
		end[g][o] = '\0';
		g++;
	}
	return (nbwords);
}

char				**ft_strsplit(char const *s, char c)
{
	int		nbwords;
	char	**end;

	if (s == NULL)
		return (NULL);
	nbwords = count_words(s, c);
	if (!(end = malloc(sizeof(char*) * (nbwords + 1))))
		return (0);
	allocation(s, nbwords, end, c);
	end[nbwords] = 0;
	return (end);
}
