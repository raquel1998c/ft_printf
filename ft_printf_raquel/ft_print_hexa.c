/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:40:51 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:44:49 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int n)
{
	int		pchars;
	char	*b;

	pchars = 0;
	b = "0123456789abcdef";
	if (n >= 16)
		pchars += ft_print_hexa(n / 16);
	pchars += write(1, &b[n % 16], 1);
	return (pchars);
}
