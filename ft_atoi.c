/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 04:02:19 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/08 05:01:13 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	negative;

	i = 0;
	n = 0;
	negative = 1;
	while (nptr[i] == ' ' || nptr[i] == '+')
		i++;
	if (nptr[i] == '-')
	{
		negative = -1;
		i++;
	}
	if (nptr[i] < '0' || nptr[i] > '9')
		return (0);
	while (nptr[i] != '\0')
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (n * negative);
		n = n * 10;
		n += nptr[i] - 48;
		i++;
	}
	return (n * negative);
}
