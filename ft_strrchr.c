/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:54:30 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/16 12:47:21 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	str_len;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (*(s + i) == c)
			return (s + i);
		i--;
	}
	return (NULL);
}
