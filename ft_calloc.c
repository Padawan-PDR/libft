/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 05:03:00 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/14 21:55:06 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len_ptr;

	len_ptr = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 0 && len_ptr / nmemb != size)
		return (NULL);
	ptr = (void *)malloc(len_ptr);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len_ptr);
	return (ptr);
}
