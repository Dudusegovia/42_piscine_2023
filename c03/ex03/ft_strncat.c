/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:42:19 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/15 16:42:17 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[100] = "34";
// 	char	str2[100] = "12";

// 	printf("self test: %s\n", ft_strncat(str2, str1, 4));
// }
