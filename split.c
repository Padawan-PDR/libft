/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:42:32 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/20 00:16:53 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_s(char *s, char c)
{
	size_t	len;

	len = 0;
	while (s)
	{
		if (*s == c)
			len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		len_s;
	char	**arrays;

	len_s = ft_count_s(s, c);
	arrays = (char **)malloc(1 + len_s * sizeof(char *));
}
