/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:11:03 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:12:00 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char ch)
{
	if ((ch >= '\t' && ch <= '\r') || ch == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	minus;
	int	i;

	result = 0;
	minus = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		minus += (minus < 0) * -1 + (minus > 0);
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	if (minus < -2 || minus > 2)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	result *= (minus < 0) * -1 + (minus > 0);
	return (result);
}

// int main() {
// 	const char str1[] = "+-++456";
// 	printf("lib : %d\n", atoi(str1));
// 	printf("imp : %d\n\n", ft_atoi(str1));

// 	const char str2[] = "+456";
// 	printf("lib : %d\n", atoi(str2));
// 	printf("imp : %d\n\n", ft_atoi(str2));

// 	const char str3[] = "-456";
// 	printf("lib : %d\n", atoi(str3));
// 	printf("imp : %d\n\n", ft_atoi(str3));

// 	const char str4[] = "456";
// 	printf("lib : %d\n", atoi(str4));
// 	printf("imp : %d\n\n", ft_atoi(str4));

// 	const char str5[] = "a456";
// 	printf("lib : %d\n", atoi(str5));
// 	printf("imp : %d\n\n", ft_atoi(str5));

// 	const char str6[] = "    456a";
// 	printf("lib : %d\n", atoi(str6));
// 	printf("imp : %d\n\n", ft_atoi(str6));
// }