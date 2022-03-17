#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*tmp;
	char	*mem;
	size_t	size;

	tmp = (char *)s1;
	mem = (char *)(s1 + n);
	size = ft_strlen(s2);
	if (!size)
		return (tmp);
	while ((tmp = ft_strchr(tmp, *s2)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, s2, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}