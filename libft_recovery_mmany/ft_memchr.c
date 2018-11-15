/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:34:43 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 05:35:43 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*str;

	i = 0;
	cc = (char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == cc)
			return ((unsigned char*)str + i);
		i++;
	}
	return (0);
}
