/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:20:52 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 05:26:24 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	end = i;
	while (src[i - end] && (i < (dstsize - 1)))
	{
		dst[i] = src[i - end];
		i++;
	}
	if (end < dstsize)
		dst[i] = '\0';
	return (end + ft_strlen(src));
}
