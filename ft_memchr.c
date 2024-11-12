/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:13:24 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/11 22:13:24 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *str, int c, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (((char *)size)[i] == (char)c)
			return ((void *)(size + i));
		i++;
	}
	return (0);
}
// char data[] = { 'a', 'b', 'c', '\0', 'd', 'e', 'f' };     // memchr '\0' dan sonrasında aramaya devam eder strchr etmez