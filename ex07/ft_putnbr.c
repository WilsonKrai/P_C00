/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:54:09 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/07 17:07:28 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char a);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		printchar('-');
		printchar('2');
		nb = 147483648;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	else if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		ft_putnbr(nb / 10);
	}
	printchar(nb % 10 + '0');
}

void	printchar(char a)
{
	write(1, &a, 1);
}
