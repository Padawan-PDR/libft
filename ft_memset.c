/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/18 14:43:51 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	char			word;

	ptr = (unsigned char *)s;
	word = (unsigned char)c;
	while (n--)
		*ptr++ = word;
	return (s);
}
