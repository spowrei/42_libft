#include "libft.h"

static int ft_word_count(char const *s, char c)
{
	int count;

	count = 1;
	while ((char)*s != '\0')
	{
		if ((char)*s == c)
			count++;
		s++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char **strings;
}
