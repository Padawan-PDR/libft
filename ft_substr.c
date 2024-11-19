/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:33:28 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/18 10:02:45 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_sub;
	size_t	len_s;

	len_s = ft_strlen((char *)s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	ptr_sub = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr_sub)
		return (NULL);
	ft_strlcpy(ptr_sub, s + start, len + 1);
	return (ptr_sub);
}
