/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedroalm <pedroalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:19:55 by pedroalm          #+#    #+#             */
/*   Updated: 2024/10/21 15:24:24 by pedroalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isprint(char printable)
{
	if((printable >= 32 && printable <= 127) || (printable >= 7 && printable <= 13) || printable == '\0')
		return (1);
	return (0);
}