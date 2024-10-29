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

unsigned int ft_strlcat(char *dst, const char *src, unsigned int size)
{
	int    i;

    i = 0;
    while (dst[i] != '\0' && i != size)
    {
        i++;
    }
	
    if (dst[i] != '\0')
      return (0);  

    while (i != size - 1 && *src != '\0')
    {
         dst[i] = *src;
         i++;
         src++;
    }
    dst[i] = '\0';
    return (sizeof(src) + size);
}