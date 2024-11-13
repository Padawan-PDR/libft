/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/12 20:14:45 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	if (!(*little))
	{
		return ((char *)big);
	}
	i = 0;
	j = 0;
	while (big[i] != '\0' && little[j] != '\0' && i <= len)
	{
		if (little[j] == big[i])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)&big[i - j]);
	return ("\0");
}
