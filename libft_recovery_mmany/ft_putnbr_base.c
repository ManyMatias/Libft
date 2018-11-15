/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:34:27 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 09:34:29 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int n, int base, int caps)
{
	char	*str;

	str = caps ? (char *)"0123456789ABCDEF" : (char *)"0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < base)
		ft_putchar(str[n]);
	else
	{
		ft_putnbr_base(n / base, base, caps);
		ft_putnbr_base(n % base, base, caps);
	}
}
