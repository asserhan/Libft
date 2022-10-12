/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:15 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/08 15:40:59 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	size_t	i;

	if (src == dst || !len)
		return (dst);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}
/*int main()
{
	int i;
	//int j;
	//j=0;
	i=0;
	int tab[6] ={0,1,2,3,4};
	int tab2[6]={10,50000,12,131,14};
	ft_memmove (tab,tab2 , 20);
	while (i < 5)
	{
		printf ("%d\t",tab[i]);
		i++;
	}
	printf("\n");
}*/