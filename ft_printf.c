/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 01:00:39 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/28 14:28:30 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	n_conversions(const char *s)
{
	int	i;
	int	n_conversions;                               

	i = 0;
	n_conversions = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			n_conversions++;
		}
		i++;
	}
	return(n_conversions);
}


int	ft_printf(const char *s, ...)
{
	if(s == NULL || *s == '\0'_
		return (NULL);
	n_conversios(s);
	
}

