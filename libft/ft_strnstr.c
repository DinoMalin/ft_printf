/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:34:41 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:35:00 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!*search)
	{
		return ((char *)(str));
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == search[j])
		{
			if (search[j + 1] == '\0' && i + j < len)
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main () {
// 	const char *str = "lorem ipsum dolor sit amet";
// 	const char *search = "dolor";
// 	char *s1;

// 	s1 = ft_strnstr(str, search, 15);
// 	printf("%s", s1);
// }