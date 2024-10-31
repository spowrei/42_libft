#include "libft.h"

void	*ft_memset(void *arr, int c, size_t n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}