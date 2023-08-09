/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexaup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:46:27 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:40:50 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexaup(unsigned int n)
{
	int		counter;
	char	*base;

	counter = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		counter += ft_print_hexaup (n / 16);
		counter += write (1, &base[n % 16], 1);
	}
	return (counter);
}
