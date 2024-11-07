/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/07 01:20:57 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memset(void *s, int c, int n)
{
	unsigned char *ptr;
	char word;

	ptr = (unsigned char *)s;
	word = (unsigned char)c;
	while(n--)
			*ptr++ = word;
	return(void *)s;
}