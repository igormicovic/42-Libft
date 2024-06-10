/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:27:47 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/10 11:51:22 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (i++ < n)
			d[i] = s[i];
	}
	return (dest);
}
