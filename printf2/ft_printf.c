/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:59:32 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/10 15:05:55 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_flags(char c)

{
	if (c == 'c')
		return (&ft_print_c);
	if (c == 's')
		return (&ft_print_str);
	if (c == 'd')
		return (&ft_print_i_d_u);
	if (c == 'i')
		return (&ft_print_i_d_u);
	if (c == 'p')
		return (&ft_print_ptr);
	if (c == 'u')
		return (&ft_print_i_d_u);
	if (c == 'x')
		return (&ft_print_hexa);
	if (c == 'X')
		return (&ft_print_hexaup);
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		n;
	int		i;

	n = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_flags(str[++i]))
			n += ((int (*)(char))ft_flags(str[i]))(str[i]);
		else
		{
			if (str[i] == '%' && str[i + 1] != '\0')
				n += write(1, &str[i++], 2);
			else
				n += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (n);
}
