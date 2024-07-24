/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:00:47 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/23 14:51:05 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// void	ft_putstr(char *str)
// {
// 	while (str[i])
// 	{
// 		write (1, str, 1);
// 		str++;
// 	}
// }

// int	main(void)
// {
// 	char	src[] = "Hola bebito Luis Arturo!";

// 	char dest[50];
// 	ft_strcpy(dest, src);
// 	ft_putstr("Source: ");
// 	ft_putstr(src);
// 	ft_putstr("\n");
// 	ft_putstr("Destination: ");
// 	ft_putstr(dest);
// 	ft_putstr("\n");
// 	return (0);
// }