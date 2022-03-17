char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int len1;
    unsigned int len2;
    unsigned int i;
    unsigned char *str;

    str1 = (char *)s1;
    str2 = (char *)s2;

    len1 = (ft_strlen(str1) + 1);
    len2 = (ft_strlen(str2));
    str = (char*)malloc(sizeof(char) * (len1 + len2));
    if(!str)
        return(NULL);
    i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
    	str[len1] = s2[i];
		len1++;
	}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}