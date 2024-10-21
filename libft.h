#ifndef LIBFT_H
#define LIBFT_H

int		ft_isalpha(char character);
int		ft_isdigit(char digit);
int		ft_isalnum(char alphanum);
int		ft_isascii(char ascii);
int		ft_isprint(char printable);
int		ft_toupper(int lower);
int		ft_tolower(int upper);
int		ft_strlen(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);


#endif