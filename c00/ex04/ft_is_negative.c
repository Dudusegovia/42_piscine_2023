/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:13:40 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/08 19:25:49 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;
	char	q;

	q = 'N';
	r = 'P';
	if (n >= 0)
	{
		write(1, &r, 1);
	}
	else if (n < 0)
	{
		write(1, &q, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(0);
// }
