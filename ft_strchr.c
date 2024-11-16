/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:17:40 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/16 12:38:55 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	str_len;

	str_len = ft_strlen(s);
	i = 0;
	while (i < str_len)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
