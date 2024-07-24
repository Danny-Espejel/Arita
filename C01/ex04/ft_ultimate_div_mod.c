/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:49:46 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/17 21:04:58 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Create a function ft_ultimate_div_mod with the following prototype :
// void ft_ultimate_div_mod(int *a, int *b);
// This function divides parameters a by b. 
// The result of this division is stored in the int pointed by a.
// The remainder of the division is stored in the int pointed by b.

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 2;

// 	printf("Old values of a and b are : %d - %d \n", a, b);
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("New values of a and b are : %d - %d \n", a, b);

// 	ft_ultimate_div_mod(&a, &b);

// 	return (0);
// }
