/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:04:48 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 21:25:24 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

//#include <stdio.h>
// int	main(void)
// {
// 	char a[] = "A";
// 	char *str;
// 	str = a;
// 	ft_str_is_uppercase(str);
// 	printf("%d", ft_str_is_uppercase(str));
// }
