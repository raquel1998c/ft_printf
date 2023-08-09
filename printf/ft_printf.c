/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:59:32 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:33:56 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (unsigned char)c != *s)
		s++;
	if ((unsigned char)c == *s)
		return ((char *)s);
	return (0);
}

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
	va_list	ap;
	int		i;
	int		n;

	va_start(ap, str);
	n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strchr("scXxiupd", str[++i]))
			{
				n += ((int (*)())ft_flags(str[i]))(va_arg(ap, void *));
				i++;
			}
			else
				n += write(1, &str[i++], 1);
		}
		else
			n += write(1, &str[i++], 1);
	}
	va_end(ap);
	return (n);
}
