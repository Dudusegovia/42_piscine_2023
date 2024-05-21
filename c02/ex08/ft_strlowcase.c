/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:05:03 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 21:25:47 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "ABCDE";
// 	char *str;

// 	str = a;
// 	ft_strlowcase(str);
// 	printf("%s", str);
// }
