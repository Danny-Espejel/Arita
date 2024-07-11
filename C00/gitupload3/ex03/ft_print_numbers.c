/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:54:45 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/11 12:34:13 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	character;

	character = '0';
	while (character <= '9')
	{
		write(1, &character, 1);
		character++;
	}
}

// int main(void)
// {
// ft_print_numbers();
// return (0);
// }