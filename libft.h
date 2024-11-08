/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrada <pedrada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:40 by pedroalm          #+#    #+#             */
/*   Updated: 2024/11/08 02:58:01 by pedrada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H 
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_isalnum(char c);
int				ft_isascii(char c);
int				ft_isprint(char c);
int				ft_toupper(int c);
int				ft_tolower(int c);
size_t			ft_strlen(char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);

#endif 