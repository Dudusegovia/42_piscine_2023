/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:46:23 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 18:17:47 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int *p_a;
// 	int *p_b;
// 	int a;
// 	int b;

// 	a = 25;
// 	b = 10;
// 	p_a = &a;
// 	p_b = &b;

// 	printf("primeiro %d e %d\n", a, b);

// 	ft_ultimate_div_mod(p_a, p_b);

// 	printf("primeiro2  %d e %d\n", a, b);
// 	return (0);
// }