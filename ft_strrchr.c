/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:19:55 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/08 02:07:38 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_str;

	len_str = ft_strlen(s);
	while (len_str >= 0)
	{
		if (s[len_str] == c)
		{
			return ((char *)&s[len_str]);
		}
		len_str--;
	}
	return (NULL);
}
