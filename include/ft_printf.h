/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:29:57 by jcario            #+#    #+#             */
/*   Updated: 2023/10/22 15:59:17 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "libft.h"

int		ft_printf(const char *str, ...);

int		ft_putstr(char *str);
int		ft_putchar(char ch);

int		ft_putnbr(int nb);
void	ft_putunbr(unsigned int nb);
int		ft_putunbr_count(unsigned int nb);

int		ft_putptr_fd(void *addr, int fd);
int		ft_puthexa(unsigned int nb, char *base);
void	ft_puthexa_fd(unsigned int n, char *base, int fd);

#endif