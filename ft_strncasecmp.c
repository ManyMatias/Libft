/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:19:23 by mmany             #+#    #+#             */
/*   Updated: 2018/11/23 17:30:21 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncasecmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && ((unsigned char)ft_tolower(s1[i])
				== (unsigned char)ft_tolower(s2[i])) && ((i + 1) < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
