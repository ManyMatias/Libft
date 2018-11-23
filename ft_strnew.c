/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:04:28 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 09:07:01 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(*result) * (size + 1));
	if (result == 0)
		return (0);
	while (i != size)
	{
		result[i] = '\0';
		i++;
	}
	result[i] = '\0';
	return (result);
}
