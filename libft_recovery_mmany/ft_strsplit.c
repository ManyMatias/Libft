/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:27:12 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 09:32:00 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		nb_word;
	int		i;

	if (!s)
		return (0);
	i = 0;
	nb_word = ft_count_word(s, c);
	result = (char **)malloc(sizeof(char *) * nb_word + 1);
	if (result == 0)
		return (0);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		result[i] = ft_strsub(s, 0, ft_word_len(s, c));
		if (result[i] == 0)
			return (0);
		s = s + ft_word_len(s, c);
		i++;
	}
	result[i] = 0;
	return (result);
}
