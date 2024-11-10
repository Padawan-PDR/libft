/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:49:37 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/10 03:31:26 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	strings_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*s + 1 == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**new_str;
	int		aux;

	aux = 0;
	i = 0;
	j = 0;
	if (s[0] == '\0' || c == '\0')
		return (NULL);
	new_str = (char **)malloc((strings_count(s, c) + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (j != 0)
				aux = i;
			ft_strlcpy(new_str[j], s + aux, i);
			j++;
		}
		i++;
	}
	return (new_str);
}
