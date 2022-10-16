/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:55:25 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/16 15:50:21 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
     char *p;
	 size_t len_s;

     if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        len_s = 0;
	else
	{
		if(start == 0)
			len_s = ft_strlen(s);
		else
			len_s = ft_strlen(s + start);
	}
	len =(len <= len_s ? len : len_s);
    p = (char *)malloc((len + 1) * sizeof (char));//'\0'
    if (!p)
        return (NULL); 
    else
		ft_strlcpy(p,s+start,len + 1);//'\0'
    return (p);
}
