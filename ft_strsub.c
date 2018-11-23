/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:19:54 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 09:24:29 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*result;

	if (s)
	{
		if ((int)len < 0 || s == 0 || !s)
			return (0);
		s = s + start;
		i = 0;
		while (s[i] != '\0' && i != len)
			i++;
		result = malloc(sizeof(*result) * (i + 1));
		if (result == 0)
			return (0);
		i = 0;
		while (i != len)
		{
			result[i] = s[i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (0);
}
