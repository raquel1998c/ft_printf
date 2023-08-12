/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexaup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:46:27 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:56:27 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexaup(unsigned int n)
{
	int		pchars;
	char	*b;

	pchars = 0;
	b = "0123456789ABCDEF";
	if (n >= 16)
		pchars += ft_print_hexaup(n / 16);
	pchars += write(1, &b[n % 16], 1);
	return (pchars);
}
