#include "libft.h"

//A Verifier//

unsigned int ft_strlcpy(char *src, char *dest, unsigned int size)
{
    unsigned int i;
    unsigned int count;

    count = 0;
    while(src[count])
    {
        count++;
    }
    i = 0;
    while(src[i] && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(i);
}

/*
int main()
{
    char *src = "Hello";
    char dest[6];

    printf("%d", ft_strlcpy(src, dest, 4));
}
*/