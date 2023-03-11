/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:07:35 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/07 15:47:34 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a1, int a2, int a3);

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 47;
	while (++n1 < 56)
	{
		n2 = n1;
		while (++n2 < 57)
		{	
			n3 = n2;
			while (++n3 < 58)
			{
				ft_write(n1, n2, n3);
			}
		}
	}
}

void	ft_write(int a1, int a2, int a3)
{
	if (a1 == 55 && a2 == 56 && a3 == 57)
	{
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, &a3, 1);
	}
	else
	{
		write (1, &a1, 1);
		write (1, &a2, 1);
		write (1, &a3, 1);
		write(1, ", ", 2);
	}
}
