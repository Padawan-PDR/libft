/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 05:03:00 by pedrada           #+#    #+#             */
/*   Updated: 2024/11/12 18:34:24 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len_ptr;

	len_ptr = nmemb * size;
	if (!nmemb || !size)
		return ('\0');
	ptr = (void *)malloc(len_ptr);
	ft_bzero(ptr, len_ptr);
	return (ptr);
}
