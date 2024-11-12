/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:17:40 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/11 21:17:40 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int str_len;
	
	str_len = ft_strlen(str);
	i = 0;
	while (i < str_len)
	{
		if (*(str + i) == c)
			return (str + i);
		i++;
	}
	return (NULL);
}