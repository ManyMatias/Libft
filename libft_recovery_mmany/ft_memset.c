/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:45:37 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 08:46:42 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *result;

	if (len == 0)
		return (b);
	result = (unsigned char *)b;
	while (len != 0)
	{
		*result = (unsigned char)c;
		result++;
		len--;
	}
	return (b);
}
