/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:21 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:18:44 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	len_number(int n)
{
	if (n <= -10)
		return (len_number(-(n / 10)) + 2);
	else if (n < 0)
		return (2);
	else if (n < 10)
		return (1);
	else
		return (len_number(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = len_number(n);
	i = len - 1;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		result[i--] = -(n % 10) + '0';
		n /= -10;
	}
	while (n > 0)
	{
		result[i--] = (n % 10) + '0';
		n /= 10;
	}
	result[len] = '\0';
	return (result);
}

// int main()
// {
// 	printf("%s", ft_itoa(0));
// }