/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:39:05 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/16 14:44:06 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t nbr_words(char const *s,char c)
{
	int i;
	int word;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)  
		{
            word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char **strings;
	size_t begin;
	size_t end;
	size_t i;
	
	if (!s || !c)
		return (NULL);
	strings = malloc((nbr_words(s,c) + 1) * sizeof (char *));
	if (!strings)
		return (NULL);
	begin = 0;
	end = 0; 
	i = 0;
	while (i < nbr_words(s,c))
	{
		while (s[begin] == c)
			begin++;
		end = begin;
		while (s[end] && s[end] != c)
			end++;
		strings[i] = ft_substr(s,begin,(end - begin));
		begin = end;	
        i++;
	}
	strings[i] = NULL;
	return (strings);
}

/*int main () 
{

	char *s =",,,ab,,cd,gh";
	char **split;
	size_t i;
	i = 0;
	split = ft_split(s,',');
	while (split[i])
	{
		printf("%s \n",split[i]);
		i++;
	}

}*/
  