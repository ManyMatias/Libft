/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:32:21 by mmany             #+#    #+#             */
/*   Updated: 2018/11/21 22:31:16 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	is_negative(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
	else
		*neg = 0;
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	int		neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = n;
	j = 2;
	neg = 0;
	is_negative(&n, &neg);
	while (i /= 10)
		j++;
	j += neg;
	if ((str = (char*)malloc(sizeof(char) * j)) == 0)
		return (0);
	str[--j] = '\0';
	while (j--)
	{
		str[j] = n % 10 + '0';
		n = n / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
