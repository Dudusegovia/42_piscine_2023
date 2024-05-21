/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 02:58:01 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/15 04:50:16 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

// #include   <stdio.h>
// int		main(void)
// {
// 	char teste[]= "testando";
// 	// printf("imprime o que queremos: ");
// 	ft_putstr(teste);
// 	return (0);
// }