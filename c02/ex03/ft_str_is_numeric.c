/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:04:34 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 21:25:12 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "3";
// 	char *str;

// 	str = a;
// 	ft_str_is_numeric(str);
// 	printf("%d", ft_str_is_numeric(str));
// }
