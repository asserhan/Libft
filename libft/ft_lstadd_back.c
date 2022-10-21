/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:45:26 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/21 18:58:54 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
	if(!lst  && !new)
		return ;
	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		while (last -> next != NULL)
			last = last -> next;
		last -> next = new;
	}
}
