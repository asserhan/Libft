/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:41:54 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/10 21:42:01 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	//(char *)p;
	size_t i;

	i = 0;
	while (i <= n)
	{
		if (((char *)s)[i] == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
int main ()
{
	char p[] = "life is hard";
	char *ptr;
	char *ptr1;
	ptr = ft_memchr(p,'\0',ft_strlen (p));
	printf("%s\n",ptr);
	ptr1 = memchr(p,'\0',ft_strlen (p));
	printf("%s",ptr1);

}

