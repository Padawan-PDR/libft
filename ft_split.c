/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:42:32 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/21 16:55:35 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_amount_s(char *s, char c)
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

static void	ft_free(char ***s_words, int n_word)
{
	int	i;

	if (!s_words || !*s_words)
		return ;
	i = 0;
	while (i < n_word)
	{
		free((*s_words)[i]);
		i++;
	}
	free(*s_words);
	*s_words = NULL;
}

static void	ft_split_string(const char *s, char c, char ***s_words, int len_s)
{
	int		i;
	int		ocurrence;
	int		n_word;
	char	*word;

	i = 0;
	n_word = 0;
	while (s[i] != '\0' && n_word < len_s)
	{
		ocurrence = 0;
		while (s[i] == (unsigned char)c)
			i++;
		while (s[i] && s[i + ocurrence] != c)
			ocurrence++;
		word = ft_substr(&s[i], 0, ocurrence);
		if (!word)
		{
			ft_free(s_words, n_word);
			return ;
		}
		(*s_words)[n_word] = word;
		n_word++;
		i += ocurrence;
	}
}

char	**ft_split(char const *s, char c)
{
	int		len_s;
	char	**s_words;

	if (!s)
		return (ft_calloc(1, sizeof(char *)));
	len_s = ft_amount_s((char *)s, c);
	if (len_s == 0)
		return (ft_calloc(1, sizeof(char *)));
	s_words = (char **)ft_calloc((len_s + 1), sizeof(char *));
	if (s_words == 0)
		return (0);
	ft_split_string(s, c, &s_words, len_s);
	return (s_words);
}
