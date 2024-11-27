/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:49:34 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/14 18:38:04 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length_n(int n)
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

static void	ft_convert(char *str, unsigned int n, int length)
{
	str[length] = '\0';
	while (length > 0)
	{
		length--;
		str[length] = '0' + (n % 10);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	int				length;
	char			*str;

	length = ft_length_n(n);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
		ft_convert(str + 1, number, length - 1);
	}
	else
	{
		number = n;
		ft_convert(str, number, length);
	}
	return (str);
}
