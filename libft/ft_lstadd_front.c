/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:23:03 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/28 13:10:23 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the given element 'new' at the beginning of the linked list 'lst'.
 *
 * @param lst The address of a pointer to the first node of the linked list.
 * @param new The node to be added at the beginning of the linked list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// if there is somethign new...
	if (new)
	{
		// set the new itms 'next' prop to the original node lst
		new->next = *lst;
		// assign the new node to the lst pointer
		*lst = new;
	}
}
