/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:17:31 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/11 20:17:38 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n' || *str == '\f' || *str == '\r');
	if (*str =='-')
	{
		sign *= -1;
		str++;
	}
	while (*str && *str >='0' && *str <='9')
	{
		result = result*10 + *str - '0';
		str++;
	}
	return (result);
}
/*int main()
{
	printf("%d\n",ft_atoi("-12445"));
	printf("%d",atoi("-12445"));
}*

