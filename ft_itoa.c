/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:49:34 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/11 20:00:31 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	len_n(int n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	convert(char *str, int n, int len, int sign)
{
	int	i;

	i = len - 1;
	if (sign == -1)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sign;

	i = 0;
	sign = 0;
	if (n <= 0)
	{
		sign = -1;
		i = 1;
	}
	i += len_n(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	convert(str, n, i, sign);
	return (str);
}
