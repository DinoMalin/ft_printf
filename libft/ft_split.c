/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:05:02 by jcario            #+#    #+#             */
/*   Updated: 2023/10/19 15:29:04 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	result_len(char const *str, char c)
{
	int	i;
	int	result;
	int	was_sep;

	i = 0;
	result = 0;
	was_sep = 1;
	while (str[i])
	{
		if (was_sep && str[i] != c)
		{
			result++;
			was_sep = 0;
		}
		if (str[i] == c)
			was_sep = 1;
		i++;
	}
	return (result);
}

static char	*cut(char const *str, char sep, int start)
{
	int		len;
	char	*result;
	int		i;
	int		j;

	len = 0;
	i = start;
	while (str[i] && str[i++] != sep)
		len++;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	i = start;
	while (str[i] && str[i] != sep)
	{
		result[j] = str[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

char	**ft_split(char const *str, char sep)
{
	int		len;
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = result_len(str, sep);
	result = malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (str[i] && j < len)
	{
		while (str[i] && str[i] == sep)
			i++;
		result[j] = cut(str, sep, i);
		j++;
		while (str[i] && str[i] != sep)
			i++;
	}
	result[j] = NULL;
	return (result);
}
// int main ()
// {
// 	char *str = "Bonjour comment ca va ";
// 	char sep = ' ';
// 	char **result = ft_split(str, sep);
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("Word %d : %s\n", i + 1, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }