/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:11:14 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 09:12:57 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*result;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		result = malloc(sizeof(*result) * i + 1);
		if (result == 0)
			return (0);
		i = 0;
		while (s[i] != '\0')
		{
			result[i] = f((char)s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (0);
}
