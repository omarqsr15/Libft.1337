/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:14:54 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/21 21:52:00 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str && !len)
		return (NULL);
	if (to_find[0] == 0)
		return ((char *) str);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] && i + j < len)
		{
			j++;
			if (to_find[j] == 0)
				return ((char *) str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
