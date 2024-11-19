/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:49:37 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/19 17:10:04 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_s_count(char const *s, char c)
{
	int	count;
	int	i;
	int	word;

	count = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i] != c && word == 0))
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static void	ft_free_arrays(char *array, char **arrays)
{
	int	i;

	i = 0;
	free(array);
	while (arrays != NULL)
	{
		free(arrays[i]);
		i++;
		arrays++;
	}
	arrays = NULL;
}

static char	*ft_strndup(const char *s, size_t n, char **arrays)
{
	char	*ptr;

	ptr = (char *)malloc(1 + n * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_strncpy(ptr, s, n);
	if (!ptr)
	{
		ft_free_arrays(ptr, arrays);
		return (NULL);
	}
	ptr[n] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**new_strings;

	i = 0;
	k = 0;
	new_strings = (char **)malloc((ft_s_count(s, c) + 1) * sizeof(char *));
	if (!new_strings)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			new_strings[k] = ft_strndup(s + j, i - j, new_strings);
			k++;
		}
	}
	new_strings[k] = NULL;
	return (new_strings);
}
