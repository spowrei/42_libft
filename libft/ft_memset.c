/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:49:49 by mukaplan          #+#    #+#             */
/*   Updated: 2024/10/17 15:49:23 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *dest;
	unsigned int i;

	dest = s;
	i = 0;

	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return ((void *)s);
}

//! dest[i] değeri int dizi girildiyse bufferoverflow olmaz mı ??