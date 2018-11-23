/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:18:02 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 05:18:15 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int slen;

	slen = ft_strlen((char*)s);
	while (slen != 0 && s[slen] != (char)c)
		slen--;
	if (s[slen] == (char)c)
		return ((char*)&s[slen]);
	return (0);
}
