/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:04:22 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 21:25:59 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "aA2";
// 	char *str;

// 	str = a;
// 	ft_str_is_alpha(str);
// 	printf("%d", ft_str_is_alpha(str));
// }
