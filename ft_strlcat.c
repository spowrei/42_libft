/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:32:28 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/11 20:32:28 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_dst;
	size_t	s_src;

	i = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (size <= s_dst)
	{
		return (size + s_src);
	}
	while (src[i] != '\0' && s_dst + i < size - 1)
	{
		dst[s_dst + i] = src[i];
		i++;
	}
	dst[s_dst + i] = '\0';
	return (s_dst + s_src);
}