/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:26:52 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 05:29:16 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int destlen;

	i = 0;
	destlen = 0;
	while (s1[destlen] != '\0')
		destlen++;
	while (s2[i] != '\0' && i < n)
	{
		s1[destlen + i] = s2[i];
		i++;
	}
	s1[destlen + i] = '\0';
	return (s1);
}
