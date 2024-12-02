/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 01:00:39 by pedrada           #+#    #+#             */
/*   Updated: 2024/12/02 10:48:45 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	n_conversions(const char *s)
{
	int	i;
	int	n_conversions;
	int	aux;

	i = 0;
	n_conversions = 0;
	aux = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			n_conversions++;
			aux = 1;
		}
		if (aux == 0)
			write(1, s[i], 1);
		i++;
	}
	return (n_conversions);
}

int	ft_printf(const char *s, ...)
{
	if (s == NULL || *s == '\0')
		return (NULL);
	n_conversions(s);
	ft_strchr(s, '%');
	if (*s + 1 != 'c' || \
	*s + 1 != 's' || \
	*s + 1 != 'p' || \
	*s + 1 != 'd' || \
	*s + 1 != 'i' || \
	*s + 1 != 'u' || \
	*s + 1 != 'x' || \
	*s + 1 != 'X' || \
	*s + 1 != '%')
		return (NULL);
}
