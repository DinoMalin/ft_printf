/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:13:06 by jcario            #+#    #+#             */
/*   Updated: 2023/10/22 15:18:43 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_var(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	if (type == 's')
		return (ft_putstr((char *)va_arg(args, char *)));
	if (type == 'p')
		return (ft_putptr_fd((void *)va_arg(args, void *), 1));
	if (type == 'd')
		return (ft_putnbr((int)va_arg(args, int)));
	if (type == 'i')
		return (ft_putnbr((int)va_arg(args, int)));
	if (type == 'u')
		return (ft_putunbr_count((unsigned int)va_arg(args, unsigned int)));
	if (type == 'x')
		return (ft_puthexa((int)va_arg(args, int), "0123456789abcdef"));
	if (type == 'X')
		return (ft_puthexa((int)va_arg(args, int), "0123456789ABCDEF"));
	if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_put_var(str[i], args);
			i++;
		}
		if (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

// int main()
// {
// 	ft_printf("%d", ft_printf(" %x ", -1));
// }
