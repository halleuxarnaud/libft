#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	   *ft_strrchr(const char *s, int c);
int		    ft_atoi(const char *str);
void	    ft_bzero(void *s, size_t n);
int		    ft_isalnum(int c);
int	    	ft_isalpha(int c);
int	    	ft_isdigit(int c);
int         ft_isascii(int c);
int         ft_isprint(int c);
void    	*ft_memchr(const void *s, int c, size_t n);
int         ft_memcmp(const void *str1, const void *str2, size_t n);
void        *ft_memcpy(void *dest, const void *src, size_t n);
void	    *ft_memmove(void *dst, const void *src, size_t len);
void	    *ft_memset(void *b, int c, size_t len);
size_t  	ft_strlcat(char *dst, const char *src, size_t dstsize);
unsigned int ft_strlcpy(char *src, char *dest, unsigned int size);
int         ft_strlen(char *str);
int	        ft_strncmp(char *s1, char *s2, int n);
int         ft_tolower(int c);
int         ft_toupper(int c);
char	    *ft_strnstr(const char *s1, const char *s2, size_t n);
void        *ft_calloc(size_t count, size_t size);
char	    *ft_strdup(char *src);
char        *ft_strjoin(char const *s1, char const *s2);
void        ft_putchar_fd(char c, int fd);
void	    ft_putnbr_fd(int n, int fd);
void        ft_putstr_fd(char *s, int fd);

#endif