/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:17:13 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/11 15:17:22 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if ((ft_strlen(needle) == len) && ft_strncmp(haystack, needle,len) != 0)
		return (NULL);
	while (*haystack && len--)
	{
		if ((*haystack == *needle)
			&& ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
        char *s2 = "MZIRIBMZE";
        size_t max = strlen(s2);
        char *i1 = strnstr(s1, s2, max);
        char *i2 = ft_strnstr(s1, s2, max);
		printf("%s",i1);
		printf("%s",i2);

}
