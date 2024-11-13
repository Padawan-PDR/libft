/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/12 20:13:59 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	char		*cast_src;
	int			srclen;
	int			dstlen;

	cast_src = (char *)src;
	srclen = ft_strlen(cast_src);
	dstlen = ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0' && i != size)
		i++;
	if (dst[i] == '\0')
		return (0);
	while (i != size - 1 && *src != '\0')
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (srclen + dstlen);
}
