/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:18:59 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/18 10:10:33 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat_str;
	int		len_str1;
	int		len_str2;
	int		i;
	int		j;

	len_str1 = ft_strlen(s1);
	len_str2 = ft_strlen(s2);
	i = 0;
	j = 0;
	cat_str = (char *)malloc((len_str1 + len_str2 + 1) * sizeof(char));
	if (!cat_str)
		return (NULL);
	while (i < len_str1)
	{
		cat_str[i] = s1[i];
		i++;
	}
	while (j < len_str2)
	{
		cat_str[i + j] = s2[j];
		j++;
	}
	cat_str[i + j] = '\0';
	return (cat_str);
}
