/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/10/21 17:45:33 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	int    i;
	int j;
	i = 0;
	j = 0;
	while(src[j] != '\0')
    {
		if(i < size - 1)
		{
		  dst[i] = src[i];
		  i++;
		}
		j++;
	}
	dst[i] = '\0';

	return (j);
	
}