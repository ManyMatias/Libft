/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:22:18 by mmany             #+#    #+#             */
/*   Updated: 2018/11/23 18:43:31 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && ((unsigned char)ft_tolower(s1[i])
				== (unsigned char)ft_tolower(s2[i])))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
