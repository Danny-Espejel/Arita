/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:42:54 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/25 00:05:13 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
// Reproduce the behavior of the function strcmp (STRING COMPARE).

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "Hola bebe";
// 	char	str2[] = "Hola baby";
// 	int		result;

// 	result = ft_strcmp(str1, str2);
// 	if (result < 0)
// 	{
// 		printf("\"%s\" is less than \"%s\"\n", str1, str2);
// 	}
// 	else if (result > 0)
// 	{
// 		printf("\"%s\" is greater than \"%s\"\n", str1, str2);
// 	}
// 	else
// 	{
// 		printf("\"%s\" is equal to \"%s\"\n", str1, str2);
// 	}
// 	printf("%d\n", result);
// 	return (0);
// }
