#include "libft.h"

char *ft_strdup(const char *src)
{
	char *buffer;
	size_t size;

	size = ft_strlen(src) + 1;
	buffer = (char *)malloc(size);
	if (buffer == NULL)
		return (NULL);
	ft_memcpy(buffer, src, size);
	return (buffer);
}