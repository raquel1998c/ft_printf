/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:24:17 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:35:34 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long int mem)
{
	int	counter;

	counter = 0;
	if (!mem)
	{
		counter += write (1, "(nil)", 5);
		return (counter);
	}
	counter += write(1, "0x", 2) + ft_print_hexa(mem);
	return (counter);
}
