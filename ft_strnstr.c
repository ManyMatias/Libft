/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 04:12:36 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 04:49:27 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		lenhay;

	if (*needle == '\0')
		return ((char*)haystack);
	lenhay = ft_strlen(needle);
	while (*haystack != '\0' && len >= lenhay)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, lenhay) == 0)
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return (0);
}
