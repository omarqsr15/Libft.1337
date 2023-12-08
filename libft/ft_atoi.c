/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:50:01 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/24 20:11:25 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_the_overflow(const char *str, int sg, int i)
{
	long	nm;

	nm = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nm > 922337203685477580
			|| (nm == 922337203685477580 && str[i] > '7'))
		{
			if (sg == 1)
				return (-1);
			return (0);
		}
		nm = nm * 10 + (str[i] - 48);
		i++;
	}
	return (nm * sg);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sg;

	i = 0;
	sg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sg = -1;
		i++;
	}
	return (ft_check_the_overflow(str, sg, i));
}
