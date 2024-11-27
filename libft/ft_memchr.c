/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 03:20:15 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/21 12:20:59 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;

	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (n--)
	{
		if (*str == letter)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
