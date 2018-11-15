/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 04:58:22 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 05:00:21 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		len1;
	size_t		len2;
	const char	*p1;
	const char	*p2;

	len1 = ft_strlen(haystack);
	len2 = ft_strlen(needle);
	p1 = haystack;
	p2 = needle;
	i = 0;
	if (haystack[0] == '\0' && needle[0] == '\0')
		return (&((char*)p1)[i]);
	while (i < len1)
	{
		if (ft_memcmp(&p1[i], p2, len2) == 0)
			return (&((char*)p1)[i]);
		i++;
	}
	return (0);
}
