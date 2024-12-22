/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 01:00:39 by pedrada           #+#    #+#             */
/*   Updated: 2024/12/02 17:16:02 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_of_arg(const char *s, va_list args)
{
	char	c;

	if (s == NULL || *s == '\0')
		return (NULL);
	if (*s == 'c' || *s == 'd')
		write(1, va_arg(args, int), 1);
	if (*s == 's')
		va_arg(args, char *);
	if (*s == 'p')
		va_arg((args, int), 16);
	if (*s == 'i')
		va_arg(args, int);
	if (*s == 'u')
		va_arg(args, unsigned int);
	if (*s == 'X')
		va_arg(args, char);
	if (*s == 'x')
		va_arg(args, char);
	if (*s == '%')
		va_arg(args, char);
}

int	ft_printf(const char *s, ...)
{
	int		n_elements;
	va_list	args;

	n_elements = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
			n_elements =+ type_of_args(*(++s), args);
		else
			n_elements =+ write(1, *s, 1);
		s++;
	}
}
