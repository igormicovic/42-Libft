/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:02:20 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/07 15:05:46 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == c)
			ptr = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		ptr = (char *)&s[i];
	return (ptr);
}
