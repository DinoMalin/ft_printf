/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:27:52 by jcario            #+#    #+#             */
/*   Updated: 2023/10/22 14:53:58 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!l || !f)
		return (NULL);
	new_list = NULL;
	while (l)
	{
		new_elem = ft_lstnew(f(l->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, d);
			return (NULL);
		}
		if (!new_elem->content)
		{
			ft_lstclear(&new_list, d);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		l = l->next;
	}
	return (new_list);
}
