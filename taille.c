/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   taille.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:24:56 by ckarsent          #+#    #+#             */
/*   Updated: 2024/11/21 11:41:48 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_nbrlen(int nb)
{
	int			i;
	long int	n;

	i = 1;
	n = nb;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_nbrlen_unsigned(unsigned int nb)
{
	int	i;

	i = 1;
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_hexlen(unsigned long nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		nb /= 16;
		i++;
	}
	return (i);
}
