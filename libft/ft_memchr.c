/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:59 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:20:17 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int s, size_t size)
{
	const unsigned char	*byte_mem;
	size_t				i;

	i = 0;
	byte_mem = (const unsigned char *) mem;
	while (i < size)
	{
		if (byte_mem[i] == (unsigned char)s)
			return ((void *)(byte_mem + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	char data[] = "Hello, World!";
// 	char target = 'A';

// 	void *result = memchr(data, target, sizeof(data));
// 	if (result != NULL)
// 	{
// 		printf("Found at position: %ld\n", (char *)result - data);
// 	}
// 	else
// 	{
// 		printf("Not found\n");
// 	}

// 	return 0;
// }