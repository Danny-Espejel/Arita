/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:46 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/17 21:06:26 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Create a function which reverses a given array of integer
// The arguments are a pointer to int and the number of ints in the array.

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}

// int	main(void)
// {
// 	int	my_array[] = {1, 2, 3, 4, 5};
// 	int	size = sizeof(my_array) / sizeof(my_array[0]);

// 	printf("Original array: ");

// 	int	i;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", my_array[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	ft_rev_int_tab(my_array, size);

// 	printf("Reversed array: ");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", my_array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
