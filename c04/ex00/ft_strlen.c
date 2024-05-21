/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 02:53:55 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/15 02:57:37 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include   <stdio.h>
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int		main(void)
// {
// 	char jota[]= "isso aí";
// 	printf("%d", ft_strlen(jota));
// 	return (0);
// }
