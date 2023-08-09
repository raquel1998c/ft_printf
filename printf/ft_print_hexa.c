/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:40:51 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:40:34 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int n)
{
	int		counter;
	char	*base;

	counter = 0;
	base = "0123456789abcedf";
	if (n >= 16)
	{
		counter += ft_print_hexa (n / 16);
		counter += write (1, &base[n % 16], 1);
	}
	return (counter);
}
