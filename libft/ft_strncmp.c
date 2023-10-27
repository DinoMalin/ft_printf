/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:39:03 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:34:04 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	ch1;
	unsigned char	ch2;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		ch1 = (unsigned char)s1[i];
		ch2 = (unsigned char)s2[i];
		if (ch1 != ch2)
			return (ch1 - ch2);
		i++;
	}
	return (0);
}

// int main() {
// 	printf("%d\n", ft_strncmp("abcdef", "abc\375xx", 5));
// 	printf("%d\n", strncmp("abcdef", "375xx", 5));
// }