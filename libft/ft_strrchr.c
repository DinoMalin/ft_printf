/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:35:18 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:35:50 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	int	i;

	i = ft_strlen(str);
	if (s == '\0')
		return ((char *)(str + i));
	while (i >= 0)
	{
		if (str[i] == s % 256)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

// int main () {
// 	char str[] = "Hello world !";
// 	// printf("%s\n", ft_strrchr(str, 'a'));
// 	printf("%s", ft_strrchr(str, 'H' + 256));
// 	printf("%s", strrchr(str, 'H' + 256));
// }