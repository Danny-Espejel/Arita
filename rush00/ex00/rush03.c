/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:47:25 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/09 10:34:36 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int j);

void	ft_print(int x, int y, int j)
{
	int	column_counter;

	column_counter = 0;
	while (column_counter < x)
	{
		if (j == 0 || j == y - 1)
		{
			if (column_counter == 0)
				ft_putchar('A');
			else if (column_counter == x - 1)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		else
		{
			if (column_counter == 0 || column_counter == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		column_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_counter; //declaration 

	line_counter = 0; // initialisation
	// 0 first line 9 is last line -- when line is less than X we are ending the while loop 
	while (line_counter < y)
	{
		ft_print(x, y, line_counter);
		line_counter++;
	}
}



