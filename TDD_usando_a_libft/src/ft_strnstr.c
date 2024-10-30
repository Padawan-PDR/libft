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

char    *ft_strnstr(const char *big, const char *little, int len)
{    
    if (!(*little))
    {
        return (char *)big;
    }

    int    i;
    int    j;

    i = 0;
    j = 0;
    while (big[i] != '\0' && little[j] != '\0' && i <= len)
    {
        if (little[j] == big[i])
            j++;
        i++;
	}
    if (little[j] == '\0')
	    return    (char *)&big[i - j];
	return ('\0');
}