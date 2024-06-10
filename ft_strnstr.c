/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:24:47 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/10 13:24:29 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!big && !little)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		if (!ft_strncmp(&big[i], little, ft_strlen(little) - 1))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
