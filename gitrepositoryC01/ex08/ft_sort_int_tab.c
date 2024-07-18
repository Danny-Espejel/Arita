/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:53:34 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/17 21:06:58 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function is similar to that in ex07 but it sorts the numbers 
//from smallest to largest, it also uses a bubble iteration principle

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
// int main(void)
// {
// 	int my_array[] = {5, 1, 4, 2, 3};
// 		int size = sizeof(my_array) / sizeof(my_array[0]);

// 	printf("Original array: ");
// 	int i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", my_array[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	ft_sort_int_tab(my_array, size); // Sort the array

// 	printf("Sorted array: ");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", my_array[i]);
// 		i++;
// 	}
// 	printf("\n");

//     return 0;
// }