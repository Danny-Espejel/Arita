/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:44:51 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/25 20:41:15 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Reproduce the behavior of the function strncmp STRING N COMPARE
// Corrected from prev: handles case where n is smaller than i

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] != '\0' || s2[i] != '\0')
			return (s1[i] - s2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "Hola bebe";
// 	char str2[] = "Hola baby";
// 	unsigned int n = 10;
// 	int result = ft_strncmp(str1, str2, n);
// 	if (result < 0)
// 	{
// 		printf("\"%s\" is less than \"%s\" when \"%u\" chars are compared \n",
// 			str1, str2, n);
// 	}
// 	else if (result > 0)
// 	{
// 		printf("\"%s\" bigger than \"%s\" when \"%u\" chars are compared \n",
// 			str1, str2, n);
// 	}
// 	else
// 	{
// 		printf("\"%s\" is equal to \"%s\" when \"%u\" chars are compared \n",
// 			str1, str2, n);
// 	}
// }