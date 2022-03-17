#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dst_temp;
	const unsigned char	*src_temp;

	dest_temp = (unsigned char*)dst;
	src_temp = (unsigned char*)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src_temp < dst_temp)
		while (++i <= len)
			dst_temp[len - i] = src_temp[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}