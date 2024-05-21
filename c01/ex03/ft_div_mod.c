/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esegovia <esegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:13:14 by esegovia          #+#    #+#             */
/*   Updated: 2023/06/14 18:17:53 by esegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;
// 	a = 25;
// 	b = 10;
//     // printf("%d\n", a);
//     // printf("%d\n", b);
// 	ft_div_mod(a, b, &div, &mod);
//     printf("%d\n", mod);
//     printf("%d\n", div);
// }