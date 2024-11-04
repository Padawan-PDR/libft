/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/04 11:46:46 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned int *ptr_dest;
	unsigned int *ptr_src;
	
	ptr_dest = (unsigned int *)dest;
	ptr_src = (unsigned int *)src;
	while(n--)
	{
		*ptr_dest++ = *ptr_src++;
	}
	return (void *)dest;
}
