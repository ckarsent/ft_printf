/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:19:28 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/14 12:40:59 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_noyau(va_list *arg, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*arg, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*arg, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(*arg, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_base(va_arg(*arg, int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_base(va_arg(*arg, int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (ft_putptr(va_arg(*arg, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		j;

	va_start(arg, str);
	i = 0;
	j = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			j += ft_noyau(&arg, str[i + 1]);
			i ++;
		}
		else
			j += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (j);
}
/*
#include <limits.h>
int	main(void)
{
	//int test = 97;
	//unsigned long test_value = ULONG_MAX;
	//ft_printf("p : %p, test : %p\n", (void *)test_value, (void *)-14523);
	//printf("p : %p, test : %p\n", (void *)test_value, (void *)-14523);
	//ft_printf("x : %x, X : %X\n", test, test);
	//printf("x : %x, X : %X\n", test, test);
	//ft_printf("d : %d, s : %s, c : %c, u : %u \n", -10, "coucou", 'a', -1);
	//printf("d : %d, s : %s, c : %c, u : %u\n", -10, "coucou", 'a', -1);
	ft_printf("%p\n", (void *)0);
	printf("%p", (void *)0);
}*/
