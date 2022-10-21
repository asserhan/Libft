/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:02:11 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/20 18:40:21 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p; 
	p = malloc(count * size);
	if(!p)
		return (NULL);
	ft_memset(p,0,count * size);
	return (p);
}

// int main()
// {
// 	int *c;
// 	c = ft_calloc(-10, 10);
// 	printf("%p", c);
// }
