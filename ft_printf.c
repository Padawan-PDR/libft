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


static int	count_conversions(const char *s, char *t_actual_element)
{
	int	i;
	int	n_elements; 
	int	aux;

	i = 0;
	n_elements = 0;
	while (*s)
	{
		if (*s == '%')
		{
			n_elements++;
			aux = 1;
			s++;
			t_actual_element[n_elements] = *s;
		}
		if (!aux)
			write(1, *s, 1);
		s++;
	}
	return (n_elements);
}
static void	conversion(char *element)
{
	

		
}

int	ft_printf(const char *s, ...)
{
	char	*t_actual_element;
	int	i;

	i = count_conversions(s, t_actual_element);
	if (s == NULL || *s == '\0')
		return (NULL);
	va_list args;
	va_start(args, i);
	if (*element + 1 == 'c')
		va_arg(args, char);
	if(*element + 1 != 's')
		va_arg(args, char *)
	if(*element + 1 != 'p')
		va_arg(args, )
	if(*element + 1 != 'd')
		return (char);
	if(*element + 1 != 'i')
		return (char);
	if(*element + 1 != 'u')
		return (char);
	if(*element + 1 != 'X')
		return (char);
	if(*element + 1 != 'x')
		return (char);
	if(*element + 1 != '%')
		return ();
}
