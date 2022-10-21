/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:07:28 by hasserao          #+#    #+#             */
/*   Updated: 2022/10/20 10:42:41 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h> // mode header
#include <fcntl.h> //open header
void    ft_putnbr_fd(int n, int fd)
{
    long int z;
    z = n;
    if (z < 0)
    {
        ft_putchar_fd('-',fd);
        z = -z;
    }
    if (z < 10)
    {
        ft_putchar_fd(z + 48 , fd);
    }
    else
    {
        ft_putnbr_fd(z / 10,fd);
        ft_putnbr_fd(z % 10,fd);
    }
}
