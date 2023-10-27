/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:26:30 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:26:39 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *) ptr;
	while (size--)
	{
		*byte_ptr = (unsigned char)value;
		byte_ptr++;
	}
	return (ptr);
}

// int main() {
// 	char tab[5] = {1, 2, 3, 4, 5};
// 	int value = '*';
// 	ft_memset(tab, value, 5);
// 	for (int i = 0; i < 5; i++) {
// 		printf("%c ", tab[i]);
// 	}
// }