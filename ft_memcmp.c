#include "libft.h"

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t      i;
    unsigned char *str1_temp;
    unsigned char *str2_temp;

    i = 0;
    str1_temp = (unsigned char *)str1;
    str2_temp = (unsigned char *)str2;
    while(i < n)
    {
        if(str1_temp[i] != str2_temp[i])
            return(str1_temp[i] - str2_temp[i]);
        i++;   
    }
    return(0);


    i = 0;
}

/*
int main(void)
{
   char *str1 = "Hello";
   char *str2 = "Hell0";

   printf("%d", ft_memcmp(str1, str2, 5));

}
*/