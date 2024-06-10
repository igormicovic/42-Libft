/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:10:10 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/09 07:21:07 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(len + 1);
	if (!ptr && !s)
		return (NULL);
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
