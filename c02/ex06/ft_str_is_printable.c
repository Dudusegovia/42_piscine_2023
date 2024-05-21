/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:04:53 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/15 00:13:47 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "\n";
// 	char *str;

// 	str = a;
// 	ft_str_is_printable(str);
// 	printf("%d", ft_str_is_printable(str));
// }