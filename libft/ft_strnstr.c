/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:17:13 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/21 12:11:26 by hasserao         ###   ########.fr       */
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
	size_t i;
	i = 0;
	while (haystack[i] && i < len)
	{
		if ((haystack[i] == *needle)
			&& ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
	
// 	printf("->%s\n",ft_strnstr(haystack, "cd", 8));
// 	printf("->%s\n",strnstr(haystack, "cd", 8));
	
	
// }

