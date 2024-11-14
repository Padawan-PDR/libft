/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 05:03:00 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/14 06:06:26 by pedrada          ###   ########.fr       */
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
	if (!nmemb && len_ptr / nmemb != size)
		return ('\0');
	ptr = (void *)malloc(len_ptr);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len_ptr);
	return (ptr);
}
