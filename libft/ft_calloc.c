/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:15:15 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:15:48 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc((count * size));
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}

// int main () {
// 	int i;
// 	int * pointer = (int *) ft_calloc(10, sizeof(int));

// 	assert(pointer != NULL);

// 	for ( i=0; i<10-1; i++ ) {
// 		pointer[i] = i;
// 	}

// 	for (i=0; i<10; i++ ) {
// 		printf("%d ", pointer[i]);
// 	}
// 	printf("\n");

// 	free(pointer);

// 	return 0;
// }