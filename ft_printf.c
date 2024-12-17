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
	va_list	args;

	if (s == NULL || *s == '\0')
		return (NULL);
	va_start(args, 6);
	if (*s + 1 == 'c')
		va_arg(args, char);
	if (*s + 1 == 's')
		va_arg(args, char *);
	if (*s + 1 == 'p')
		va_arg(args, char);
	if (*s + 1 == 'd')
		va_arg(args, int);
	if (*s + 1 == 'i')
		va_arg(args, int);
	if (*s + 1 == 'u')
		va_arg(args, unsigned int);
	if (*s + 1 == 'X')
		va_arg(args, char);
	if (*s + 1 == 'x')
		va_arg(args, char);
	if (*s + 1 == '%')
		va_arg(args, char);
}

int	ft_printf(const char *s, ...)
{
	int		n_elements;
	char	*t_actual_element;
	va_list	args;

	n_elements = 0;
	while (*s)
	{
		if (*s == '%')
		{
			n_elements++;
			s++;
			t_actual_element[n_elements] = *s;
		}
		else
			write(1, *s, 1);
		s++;
	}
	type_of_args(s, args);
}
