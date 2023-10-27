/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:24:02 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:25:37 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*byte_dest;
	unsigned char	*byte_src;
	size_t			i;

	i = 0;
	byte_dest = (unsigned char *) dest;
	byte_src = (unsigned char *) src;
	if (size == 0 || byte_dest == byte_src)
		return (dest);
	while (i < size)
	{
		if (dest > src)
			byte_dest[size - 1 - i] = byte_src[size - 1 - i];
		else
			byte_dest[i] = byte_src[i];
		i++;
	}
	return (dest);
}

// int main() {
// 	char tab[6] = {'1', '2', '3', '4', '5', '6'};

// 	void * source = (void *) tab + 2;
// 	void * dest = (void *) (tab + 1);

// 	ft_memmove(dest, source, 5);
// 	printf("\n");
// 	for (int i = 0; i < 5; i++) {
// 		printf("%c ", tab[i]);
// 	}
// }