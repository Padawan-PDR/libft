/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:19:55 by pedroalm          #+#    #+#             */
/*   Updated: 2024/10/21 15:24:24 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isalnum(char alphanum)
{
	if
	(
		(alphanum >= '0' && alphanum <= '9') 
		|| (alphanum >= 'a' && alphanum <= 'z') 
		|| (alphanum >= 'A' && alphanum <= 'Z')
	)
		return (1);
	return (0);
}