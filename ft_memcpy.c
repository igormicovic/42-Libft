/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:19:22 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/09 04:42:59 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (!dest && !src)
		return (NULL);
	ptr = dest;
	i = -1;
	while (++i < n)
		ptr[i] = *(unsigned char *)(src + i);
	return (dest);
}