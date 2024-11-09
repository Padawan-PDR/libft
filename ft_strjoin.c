/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:18:59 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/08 21:29:09 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_str;
	int		len_str1;
	int		len_str2;
	int		len_cat;

	len_str1 = ft_strlen((char *)s1);
	len_str2 = ft_strlen((char *)s2);
	len_cat = len_str1 + len_str2;
	ptr_str = (char *)malloc(len_cat + 1);
	ptr_str = ft_strlcat((char *)s1, (char *)s2, len_cat);
	return (ptr_str);
}
