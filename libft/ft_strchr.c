/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:53:08 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/21 10:52:41 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(char *)s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*(char *)s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
// int main()
// {
// 	char s[] = "tripouille";
// 	printf("%s\n",ft_strchr(s, 't' + 256));
// 	printf("%s",strchr(s, 't' + 256));
	 
// }