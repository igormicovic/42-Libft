/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:41:06 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/09 00:47:20 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	gs(const char *s1, const char *set)
{
	int	i;
	int	start;

	start = 0;
	i = 0;
	while (set[i])
	{
		if (set[i] == s1[start])
		{
			start++;
			i = 0;
			continue ;
		}
		i++;
	}
	return (start);
}

static int	ge(const char *s1, const char *set)
{
	int	i;
	int	end;

	i = 0;
	end = ft_strlen(s1);
	while (set[i])
	{
		if (set[i] == s1[end])
		{
			end--;
			i = 0;
			continue ;
		}
		i++;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		end;
	int		start;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	start = gs(s1, set);
	end = ge(s1, set);
	i = 0;
	while (start < end - 1)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
