/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:32:21 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 09:32:33 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(long long int n)
{
	int	i;

	i = 1;
	n = n / 10;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(long long int n)
{
	char					*result;
	int						len;
	unsigned long long int	nb;

	len = ft_get_len(n);
	nb = n;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	result = (char *)ft_memalloc(sizeof(char *) * len);
	if (result == NULL)
		return (NULL);
	len--;
	result[len] = nb % 10 + 48;
	while (nb != 0)
	{
		nb = nb / 10;
		len--;
		result[len] = nb % 10 + 48;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
