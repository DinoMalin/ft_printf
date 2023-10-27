/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:36:43 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:36:55 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_len;
	size_t	actual_len;

	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));
	if (str_len - start < len)
		actual_len = str_len - start;
	else
		actual_len = len;
	result = malloc((actual_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &str[start], actual_len + 1);
	return (result);
}

// int main () {
// 	char str[] = "tripouille";
// 	char *result = ft_substr(str, 100, 1);
// 	printf("%s", result);
// }