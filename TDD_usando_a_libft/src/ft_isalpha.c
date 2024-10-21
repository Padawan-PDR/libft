/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:59:16 by pedroalm          #+#    #+#             */
/*   Updated: 2024/10/21 15:24:24 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isalpha(char character)
{
	if
	(
		(character >= 'a' && character <= 'z') 
		|| (character >= 'A' && character <= 'Z')
	)
		return (1);
	return (0);
}