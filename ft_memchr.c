#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
    char    str[] = "ceci est une phrase.";
    char    c = 't';
    char *mem = ft_memchr(str, c, 15);
    printf("%s\n", mem);
}
*/
