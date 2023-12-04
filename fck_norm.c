/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fck_norm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:15:46 by amecani           #+#    #+#             */
/*   Updated: 2023/11/24 14:33:18 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	*save_point;

	c = c % 256;
	save_point = NULL;
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			return (save_point = (char *)s);
		s++;
	}
	return (0);
}
