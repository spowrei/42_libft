/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:36:24 by mukaplan          #+#    #+#             */
/*   Updated: 2024/10/31 15:36:24 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*src_char;
	char			*dst_char;

	i = len;
	src_char = (char *)src;
	dst_char = (char *)dst;
	if (dst == src)
		return (dst);
	else if (dst_char > src_char)
	{
		while (i-- > 0)
			*(dst_char + i) = *(src_char + i);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(dst_char + i) = *(src_char + i);
			i++;
		}
	}
	return (dst_char);
}
