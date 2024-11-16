/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:44:28 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/16 12:44:41 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		result = (char *)malloc(sizeof(char));
		if (result == NULL)
			return (NULL);
		*result = '\0';
	}
	else
	{
		if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		result = malloc(sizeof(char) * len + 1);
		if (result == NULL)
			return (NULL);
		ft_strlcpy(result, (void *)&s[start], len);
	}
	return (result);
}
