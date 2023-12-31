/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:57:21 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/24 10:26:09 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int e)
{
	if (e >= 32 && e <= 126)
		return (1);
	else
		return (0);
}
