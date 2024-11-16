/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:17:05 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/16 12:45:58 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*buffer;
	unsigned int	i;

	i = 0;
	buffer = (void *)malloc(count * size);
	if (buffer != NULL)
		ft_bzero(buffer, count * size);
	return (buffer);
}
