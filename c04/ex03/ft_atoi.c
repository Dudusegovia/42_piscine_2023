/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:52:27 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/15 17:12:04 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	outp;

	i = 0;
	neg = 1;
	outp = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			neg *= -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		outp = (str[i] - 48) + (outp * 10);
		i++;
	}
	return (neg * outp);
}

// #include <stdio.h>

// int	main (void)
// {
// 	char	*s = "            ----++---++--+54h53";
// 	printf("%d\n", ft_atoi(s));
// }
// espaços
// - e +
// -
