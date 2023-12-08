/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:48:03 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/26 18:45:47 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int	o;

	o = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		o++;
	}
	while (n)
	{
		n /= 10;
		o++;
	}
	return (o);
}

char	*ft_itoa(int n)
{
	int		len;
	long	a;
	char	*num;

	len = len_nbr(n);
	a = n;
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = 0;
	len--;
	if (a == 0)
		num[len] = '0';
	if (a < 0)
	{
		num[0] = '-';
		a *= -1;
	}
	while (a)
	{
		num[len--] = (a % 10) + 48;
		a /= 10;
	}
	return (num);
}
