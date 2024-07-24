/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astubbe <astubbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:46 by astubbe           #+#    #+#             */
/*   Updated: 2024/07/17 21:06:01 by astubbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

// int	main(void)
// {
// 	char	*mystring;
// 	int		length;
// 	char	result[50];
// 	int		result_length;

// 	mystring = "Hola Luis Arturo de mi amor!";

// 	length = ft_strlen(mystring);

// 	result_length = sprintf(result, "Your string has: %d\n", length);

// 	write(1, result, result_length);

// 	return (0);
// }

// This below was a much simpler solution
// But i'm not sure that we could use "strlen" function:

// void putstr(const char *str) {
//     int len;
//     len = strlen(str);
//     printf("%s\n", str);
//     printf("The length of string is : %i \n",len);
// }

// int main() {
//     const char *myString = "Hello, world!";
//     putstr(myString);

//     return 0;
// }