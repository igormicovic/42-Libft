/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:24:14 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/09 07:17:47 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	i = -1;
	len = ft_strlen(s);
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (++i < len)
		ptr[i] = s[i];
	return (ptr);
}
