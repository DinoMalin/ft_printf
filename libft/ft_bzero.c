/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:12:13 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:14:39 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*byte_ptr;

	byte_ptr = ptr;
	while (n--)
	{
		*byte_ptr = '\0';
		byte_ptr++;
	}
}

// int main() {
// 	char tab[5] = {'1', '2', '3', '4', '5'};
// 	ft_bzero(tab, 5);
// 	for (int i = 0; i < 5; i++) {
// 		printf("%c ", tab[i]);
// 	}
// }