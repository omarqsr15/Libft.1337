/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:14:16 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/11/24 16:57:53 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_words(const char *str, char d)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 && str[i] != d)
			count++;
		if (str[i] == d && str[i + 1] != d && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static	int	split_strlen(const char *str, char d)
{
	int	i;

	i = 0;
	while (str[i] != d && str[i])
		i++;
	return (i);
}

static void	*is_free(char **return_arr)
{
	size_t	i;

	i = 0;
	while (return_arr[i])
	{
		free(return_arr[i]);
		i++;
	}
	free(return_arr);
	return (NULL);
}

static	void	alloc_str(const char **s, char **ret, char c)
{
	int	i;
	int	len;

	i = 0;
	len = split_strlen(*s, c);
	*ret = (char *)malloc(len + 1);
	if (!*ret)
		return ;
	while (i < len)
	{
		(*ret)[i] = **s;
		i++;
		(*s)++;
	}
	(*ret)[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**return_arr;
	int		words_to_split;
	int		i;

	if (!s)
		return (NULL);
	words_to_split = ft_words(s, c);
	i = 0;
	return_arr = (char **)malloc((words_to_split + 1) * sizeof(char *));
	if (!return_arr)
		return (NULL);
	while (i < words_to_split)
	{
		while (*s == c)
			s++;
		alloc_str(&s, &return_arr[i], c);
		if (!return_arr[i])
			return (is_free(return_arr));
		i++;
	}
	return_arr[i] = 0;
	return (return_arr);
}
