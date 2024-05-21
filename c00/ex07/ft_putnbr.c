/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:02:34 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/12 20:42:41 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nmbr;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	nmbr = '0' + (nb % 10);
	write(1, &nmbr, 1);
}

 int	main(void)
 {
 	ft_putnbr('\0');
 	return (0);
 }
