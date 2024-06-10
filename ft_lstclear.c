/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:56:40 by imicovic          #+#    #+#             */
/*   Updated: 2024/06/10 19:22:47 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	l = *lst;
	while (l != NULL)
	{
		del(l->content);
		l = l->next;
	}
	free(*lst);
	*lst = NULL;
}
