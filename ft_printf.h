/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:30:11 by amecani           #+#    #+#             */
/*   Updated: 2023/11/30 16:57:54 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int						ft_printf(const char *butterfly, ...);
int						ft_putchar(char c);
int						ft_putstring(char *str);
int						ft_putnbr(int n);
int						ft_unsigned(unsigned int i);
unsigned long long int	ft_x(unsigned long long int location);
unsigned long long int	ft_xx(unsigned long long int location);
unsigned long long int	ft_p(unsigned long long int p);
char					*ft_strchr(const char *s, int c);

#endif