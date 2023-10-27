/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:23:23 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:23:46 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*byte_dest;
	unsigned char	*byte_src;
	size_t			i;

	byte_dest = (unsigned char *) dest;
	byte_src = (unsigned char *) src;
	if (size == 0 || byte_dest == byte_src)
		return (dest);
	i = 0;
	while (i < size)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (dest);
}

// int main() {
// 	// char tab[5] = {'1', '2', '3', '4', '5'};
// 	// char tab2[5];
// 	printf("%p ", ft_memcpy(NULL, NULL, 5));
// 	// printf("%c ", memcpy(NULL, NULL, 5));
// }