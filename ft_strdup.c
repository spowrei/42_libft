/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:39:15 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/16 12:39:30 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	size_t	size;

	size = ft_strlen(s1) + 1;
	buffer = (char *)malloc(size);
	if (buffer == NULL)
		return (NULL);
	ft_memcpy(buffer, s1, size);
	return (buffer);
}
