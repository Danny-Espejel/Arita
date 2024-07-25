/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:46:23 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/24 23:55:32 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Reproduce the behavior of the function strncat (STRING N CONCATENATE)
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && (j < nb))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Paul";

// 	printf("%s\n", ft_strncat(str1, str2, 2));
// 	return (0);
// }
