#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = &((char*)s)[i];
		i++;
	}
	if (c == '\0')
		ret = &((char*)s)[i];
	return (ret);
}

/*
int main()
{
	char	*str = "je suis une chaine sans s a partir d'ici";

	printf("\nTesting ft_strrchr\n");
	printf("%-20s %-10s %-10s\n%-20s %-10s %-10s\n",
        "resultat attendu:", strrchr(str, 's'), strrchr(str, 'z'),
        "Mon resultat", ft_strrchr(str, 's'), ft_strrchr(str, 'z'));
}
*/