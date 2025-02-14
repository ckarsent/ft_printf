/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pxX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:23:21 by ckarsent          #+#    #+#             */
/*   Updated: 2024/12/18 17:52:53 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	long unsigned int	nb;

	nb = nbr;
	if (nb >= 16)
	{
		ft_putnbr_base(nb / 16, base);
		ft_putnbr_base(nb % 16, base);
	}
	else
		write(1, &(base[nb]), 1);
	return (ft_hexlen(nbr));
}

int	ft_putptr(void *str)
{
	int				i;
	unsigned long	ptr;

	i = 0;
	ptr = (unsigned long)str;
	if (!str)
		return (write(1, "(nil)", 5));
	i += write(1, "0x", 2);
	i += ft_putnbr_base_ptr(ptr);
	return (i);
}

int	ft_putnbr_base_ptr(unsigned long nbr)
{
	char			*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putnbr_base_ptr(nbr / 16);
		ft_putnbr_base_ptr(nbr % 16);
	}
	else
		ft_putchar(base[nbr % 16]);
	return (ft_hexlen(nbr));
}
