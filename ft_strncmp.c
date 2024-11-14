/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:19:55 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/14 04:19:53 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_str1;
	unsigned char	*ptr_str2;

	ptr_str1 = (unsigned char *)s1;
	ptr_str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr_str1 != *ptr_str2 || *ptr_str1 == '\0' || *ptr_str2 == '\0')
			return (*ptr_str1 - *ptr_str2);
		ptr_str1++;
		ptr_str2++;
	}
	return (0);
}
