#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

    if(!s)
        return (NULL);
    s_len = ft_strlen((char *)s);
    if(s_len < start)
    {
        if(!(substr = (char *)malloc(sizeof(char) * 1)))
            return(NULL);
        substr[0] = '\0';
		return (substr);
    }
    if(!(substr = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

int main(void)
{
    char *str = "Salut je m'apelle arnaud";

    printf("%s", ft_substr(str, 6, 10));
}