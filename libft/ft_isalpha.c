/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:13:18 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/23 17:53:15 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int b)
{
	if ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z'))
		return (1);
	return (0);
}
