/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:21:45 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/09 18:45:18 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(result);
	while (end > start && ft_strchr(set, s1[end - start - 1]))
		end--;
	result = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], end - start + 1);
	result[end - start] = '\0';
	return (result);
}
