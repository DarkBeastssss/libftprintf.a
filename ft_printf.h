/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:30:11 by amecani           #+#    #+#             */
/*   Updated: 2023/12/07 18:13:41 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int				ft_printf(const char *butterfly, ...);
int				ft_putchar(char c);
int				ft_putstring(char *str);
int				ft_putnbr(long n);
int				ft_unsigned(unsigned int i);
long long int	ft_x(unsigned long long int location);
long long int	ft_xx(unsigned long long int location);
long long int	ft_p(unsigned long long int p);
char			*ft_strchr(const char *s, int c);

#endif