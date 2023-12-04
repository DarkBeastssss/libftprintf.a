/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MC_Dispenser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:54:25 by amecani           #+#    #+#             */
/*   Updated: 2023/12/04 15:09:35 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	if (write(1, &c, 1) < 0)
		return (-2147483647);
	return (1);
}

int ft_putstring(char *str)
{
	int l;

	if (str == NULL) // this gay
	{
		l = write(1, "(null)", 6);
		// if (l < 0)
		// 	return (-2147483647);
		return (l);
	}
	l = 0;
	while (*str)
	{
		if (*str < 0)
			return (-1);
		l += ft_putchar(*str);
		str++;	
	}
	return (l); // this checks both for negative since reutnr gonna be -9999 or justremian bositive
}

int ft_putnbr(int n)
{
	int count;
	char o;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n / 10 > 0)
		count += ft_putnbr(n / 10);
	o = n % 10 + '0';
	return (count + write(1, &o, 1));
}

int ft_unsigned(unsigned int n)
{
	int count;
	char o;

	count = 0;
	if (n / 10 > 0)
		count += ft_unsigned(n / 10);
	o = n % 10 + '0';
	return (count + write(1, &o, 1));
	// unsigned negative (dont know what to handle)
}

unsigned long long int	ft_x(unsigned long long int location)
{
	char *hexa_libary;
	char empty;
	unsigned long long int	temp_l;
	unsigned long long int l;

	l = 0;
	if (location == 0)
		return (ft_putchar('0'));
	temp_l = location;
	hexa_libary = "0123456789abcdef";
	empty = (hexa_libary[location % 16]);
	location = location / 16;
	while (temp_l)
	{
		temp_l = temp_l / 16;
		l++;
	}
	if (location)
		ft_x(location);
	ft_putchar(empty);
	return (l);
}

unsigned long long int	ft_xx(unsigned long long int location)
{
	char *hexa_libary;
	char empty;
	unsigned long long int	temp_l;
	unsigned long long int l;

	l = 0;
	if (location == 0)
		return (ft_putchar('0'));
	temp_l = location;
	hexa_libary = "0123456789ABCDEF";
	empty = (hexa_libary[location % 16]);
	location = location / 16;
	while (temp_l)
	{
		temp_l = temp_l / 16;
		l++;
	}
	if (location)
		ft_xx(location);
	ft_putchar(empty);
	return (l);
}

unsigned long long int ft_p(unsigned long long int p)
{
	unsigned long long int count;

	write(1, "0x", 2);
	count = 2;
	if (p == 0)
		return (count + ft_putchar('0'));
	count += ft_x(p);
	return (count);
}
