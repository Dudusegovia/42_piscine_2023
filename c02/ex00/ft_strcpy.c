/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:04:07 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 21:26:13 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	a[] = "googo";
// 	char	b[] = "google";
// 	char	*dest;
// 	char	*src;
// 	dest = b;
// 	src = a;
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }
