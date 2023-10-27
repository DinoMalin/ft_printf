/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:20:28 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:21:55 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	const unsigned char	*m1;
	const unsigned char	*m2;
	size_t				i;

	i = 0;
	m1 = (const unsigned char *) ptr1;
	m2 = (const unsigned char *) ptr2;
	while (i < size)
	{
		if (m1[i] != m2[i])
			return (m1[i] - m2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char data1[] = "Hello, World!";
// 	char data2[] = "Hello, Aorld!";

// 	int result = ft_memcmp(data1, data2, sizeof(data1));
// 	printf("%d", result);

// 	return 0;
// }