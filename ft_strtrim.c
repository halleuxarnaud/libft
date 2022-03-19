#include "libft.h"

int		ft_setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
    end = (int)ft_strlen((char *)s1);
	if (!s1 || !set)
        return (NULL);
    while (s1[start] && (ft_setcheck(s1[start], set) == 0))
		start++;
	while (end > start && (ft_setcheck(s1[end - 1], set) == 0))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
    if(!str)
        return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

int main(void)
{
    char *str = "Salut je m'apelle arnaud";
    char *set = "";
    printf("%s", ft_strtrim(str, set));
}