/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:30:20 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/13 18:24:43 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t is_delimiter(char const *str, char x)
{
	while(*str)
	{
		if(*str == x)
			return(1);
		str++;
	}
	return(0);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL)
	char **p;
	size_t count;
	size_t len_p;
	size_t i;
	size_t j;
	i = 0;
	j = 0;	
	count = 0;
	while (*s && is_delimiter(s,c))
			count++;
	len_p = count + 1;
	p = (char **)malloc(len_p + 1 * sizeof(char *));
	if(!p)
		return(NULL);
	while (*s++)
	{
		if (is_delimiter (s,c))
		{
			p[i][j] = '\0';
			i++;
			j = 0;
		}
		else
		{
			p[i][j] = *s;
			j++;
		}
	}	
}

