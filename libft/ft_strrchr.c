/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:15:59 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/10 15:16:06 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i ;

	i = ft_strlen(s);
	if (c == 0)
	{
		return ((char *)s);
	}
	while (i--)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}
