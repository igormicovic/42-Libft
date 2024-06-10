/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:29:30 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/10 14:47:56 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	d_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = -1;
	count = 2;
	while (s[++i])
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}

static int	ft_get_end(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static void	ft_free(char **ptr, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		free (ptr[i]);
	free (ptr);
}

char	**ft_split(const char *s, char c)
{
	char	*str;
	char	**ptr;
	size_t	j;

	j = 0;
	if (!s && !c)
		return (NULL);
	str = ft_strtrim(s, &c);
	ptr = malloc(d_count(s, c));
	if (!ptr)
		return (NULL);
	while (j < d_count(s, c))
	{
		ptr[j] = malloc(512);
		if (!ptr[j])
			ft_free(ptr, j);
		else
		{
			ptr[j] = ft_substr(str, 0, ft_get_end(str, c));
			str = &str[ft_get_end(str, c) + 1];
			j++;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}
