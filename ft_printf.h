/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:01:29 by ckarsent          #+#    #+#             */
/*   Updated: 2024/11/21 11:56:25 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_strlen(const char *s);
int		ft_nbrlen(int nb);
int		ft_nbrlen_unsigned(unsigned int nb);
int		ft_hexlen(unsigned long nb);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long long int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putptr(void *str);
int		ft_putnbr_base_ptr(unsigned long nbr);
int		ft_printf(const char *str, ...);

#endif
