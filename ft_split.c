#include "libft.h"

static int ft_word_count(char const *s, char c)
{
	int count;

	count = 1;
	while ((char)*s == c)
		s++;
	while ((char)*s != '\0')
	{
		if ((char)*s == c && (char)*(s + 1) != c && (char)*(s + 1) != '\0')
			count++;
		s++;
	}
	return (count);
}

static char *ft_new_word(char **cursor, char c)
{
	char *temp;
	unsigned int len;
	char *word;

	len = 0;
	
	while (**cursor == c)
		(*cursor)++;
		temp = *cursor;
	while (**cursor != c && **cursor != '\0')
	{
		len++;
		(*cursor)++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, temp, len + 1);
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **strings;
	unsigned int i = 0;
	int word_count;
	char *cursor;

	cursor = (char *)s;
	word_count = ft_word_count(s, c);
	strings = (char **)malloc(sizeof(char *) * (word_count +1));
	if (strings == NULL)
		return (NULL);
	strings[word_count] = NULL;
	while (i < word_count)
	{
		strings[i] = ft_new_word(&cursor, c);
		i++;
	}
	return (strings);
}
