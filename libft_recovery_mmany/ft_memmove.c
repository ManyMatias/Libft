/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:36:10 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 06:39:42 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*i;

	i = ft_memalloc(n + 1);
	i = ft_memcpy(i, src, len);
	dst = ft_memcpy(dst, i, len);
	free(i);
	return(dst);
}
