/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:57:58 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/24 18:27:51 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newx)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = newx;
	else
	{
		last = ft_lstlast(*lst);
		last->next = newx;
	}
}
