/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 03:40:47 by mmany             #+#    #+#             */
/*   Updated: 2018/11/21 22:27:14 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(int result)
{
	if (result > 2147483647)
	{
		result = -2147483648 + (result - 2147483647);
		return (result);
	}
	if (result < -2147483648)
	{
		result = 2147483647 - (result + 2147483647);
		return (result);
	}
	else
		return (result);
}

long		ft_atoi(const char *str)
{
	size_t			i;
	int				sign;
	unsigned long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (!str[i])
		return (0);
	while (str[i] == '\v' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	result = result * sign;
	return (overflow(result));
}
