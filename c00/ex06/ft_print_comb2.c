/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:14:24 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/13 19:33:21 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			ft_putchar('0' + (num1 / 10));
			ft_putchar('0' + (num1 - (num1 / 10) * 10));
			ft_putchar(' ');
			ft_putchar('0' + (num2 / 10));
			ft_putchar('0' + (num2 - (num2 / 10) * 10));
			if (num2 <= 99 && num1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
