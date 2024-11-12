
#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void *buffer;
	unsigned int i = 0;

	buffer = (void *)malloc(count * size);
	if (buffer != NULL)
		ft_bzero(buffer, count * size);
	return (buffer);
}
