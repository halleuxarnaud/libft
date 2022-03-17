#include "libft.h"

int     ft_isalpha(int c)
{
    if((c > 64 && c < 91) || (c > 96 && c < 123))
        return(1);
    return(0);
}

/*
int main()
{
	printf("%d", ft_isalpha('d'));
}
*/