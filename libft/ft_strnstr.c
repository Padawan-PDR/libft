/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/14 04:50:26 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (!(*little))
		return ((char *)big);
	len_little = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i + len_little <= len)
	{
		j = 0;
		while (j < len_little && big[i + j] == little[j])
			j++;
		if (j == len_little)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
