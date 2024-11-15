#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) //> sil-sil-mustafa sil-
{
	char *begin_ptr;
	char *end_ptr;
	char *new_str;
	int s1_len;
	int set_len;
	int new_str_len;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	begin_ptr = s1;
	while (ft_strnstr(begin_ptr, set, set_len) == begin_ptr)
		begin_ptr += set_len;
	end_ptr = &s1[s1_len - set_len - 1];
	while (ft_strnstr(end_ptr, set, set_len) == end_ptr)
		end_ptr -= set_len;
	new_str_len = end_ptr - begin_ptr + 1;
	new_str = (char *)malloc(sizeof(char) * (new_str_len + 1));
	ft_strlcpy(new_str, begin_ptr, new_str_len);
	return (new_str);
}

#include <stdio.h>
int main()
{
	printf("%s", ft_strtrim("sil-sil-mustafa sil-", "sil-"));
	return 0;
}
