/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:24:17 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:57:34 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(size_t mem)
{
	int	pchars;

	pchars = 0;
	if (!mem)
	{
		pchars += write(1, "(nil)", 5);
		return (pchars);
	}
	if (mem < 16)
	{
		pchars += ft_print_str("0x");
		pchars += ft_print_c("0123456789abcdef"[mem % 16]);
	}
	else
	{
		pchars += ft_print_ptr(mem / 16);
		pchars += ft_print_c("0123456789abcdef"[mem % 16]);
	}
	return (pchars);
}
