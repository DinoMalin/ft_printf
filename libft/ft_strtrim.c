/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:36:03 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:36:31 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	is_in_set(char ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == ch)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*result;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = ft_strlen(str);
	while (str[start] && is_in_set(str[start], set))
		start++;
	while (end > start && is_in_set(str[end - 1], set))
		end--;
	result = malloc((end - start + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (start < end)
		result[i++] = str[start++];
	result[i] = '\0';
	return (result);
}

// int main ()
// {
// 	char str1[] = "lorem ipsum dolor sit amet";
// 	printf("%s", ft_strtrim(str1, " "));
// }