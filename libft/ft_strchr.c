/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:30:04 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:30:41 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == s % 256)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == s % 256)
		return ((char *)(str + i));
	return (NULL);
}

// int main () {
// 	char str[] = "Hello world !";
// 	printf("%s\n", ft_strchr(str, '\0'));
// 	printf("%s", ft_strchr(str, '\0'));
// }