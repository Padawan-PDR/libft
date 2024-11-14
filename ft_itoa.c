/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:49:34 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/14 05:47:34 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenght_n(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_convert(char *str, unsigned int n, int lenght)
{
	str[lenght] = '\0';
	while (lenght > 0)
	{
		lenght--;
		str[lenght] = '0' + (n % 10);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	int				lenght;
	char			*str;

	lenght = ft_lenght_n(n);
	str = (char *)malloc(lenght + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
		ft_convert(str + 1, number, lenght - 1);
	}
	else
	{
		number = n;
		ft_convert(str, number, lenght);
	}
	return (str);
}
