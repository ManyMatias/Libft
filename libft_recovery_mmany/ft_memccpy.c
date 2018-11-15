/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 06:40:24 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 08:43:01 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src1;

	if (n == 0 || dst == src)
		return (0);
	i = 0;
	dest = (char*)dst;
	src1 = (char*)src;
	while (i < n)
	{
		dest[i] = src1[i];
		if (dest[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
