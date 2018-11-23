/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:43:20 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 08:44:05 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src1;

	i = 0;
	dest = (char*)dst;
	src1 = (char*)src;
	while (i < n)
	{
		dest[i] = src1[i];
		i++;
	}
	return (dest);
}
