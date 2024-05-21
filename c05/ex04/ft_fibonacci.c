/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:25:57 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/15 19:26:05 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = index;
	if (i < 0)
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(4));
	return (0);
} */