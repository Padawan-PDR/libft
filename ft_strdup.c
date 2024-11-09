/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:24:33 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/08 20:30:19 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen((char *)s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
