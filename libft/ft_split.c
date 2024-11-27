/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:42:32 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/22 15:55:53 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	amount_s(const char *s, char c)
{
	int	count;
	int	i;
	int	len_s;

	len_s = ft_strlen(s);
	if (len_s == 0)
		return (0);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != (unsigned char)c))
		{
			while (s[i] != (unsigned char)c && s[i] != '\0')
				i++;
			count++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (count);
}

static void	free_allocation(char ***a_words, int i_word)
{
	int	i;

	if (!a_words || !*a_words)
		return ;
	i = 0;
	while (i < i_word)
	{
		free((*a_words)[i]);
		i++;
	}
	free(*a_words);
	*a_words = NULL;
}

static void	split_string(const char *s, char c, char ***a_words, int len_s)
{
	int		i;
	int		ocurrence;
	int		i_word;
	char	*word;

	i = 0;
	i_word = 0;
	while (s[i] != '\0' && i_word < len_s)
	{
		ocurrence = 0;
		while (s[i] == (unsigned char)c)
			i++;
		while (s[i + ocurrence] && s[i + ocurrence] != c)
			ocurrence++;
		word = ft_substr(&s[i], 0, ocurrence);
		if (!word)
		{
			free_allocation(a_words, i_word);
			return ;
		}
		(*a_words)[i_word] = word;
		i_word++;
		i += ocurrence;
	}
}

char	**ft_split(char const *s, char c)
{
	int		len_s;
	char	**a_words;

	if (!s)
		return (ft_calloc(1, sizeof(char *)));
	len_s = amount_s(s, c);
	if (len_s == 0)
		return (ft_calloc(1, sizeof(char *)));
	a_words = (char **) ft_calloc((len_s + 1), sizeof(char *));
	if (a_words == 0)
		return (0);
	split_string(s, c, &a_words, len_s);
	return (a_words);
}
