/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i_d_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:24:17 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:33:56 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i_d_u(long int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter += ft_print_c('-');
		n *= -1;
	}
	if (n > 9)
	{
		counter += ft_print_i_d_u (n / 10);
		counter += ft_print_i_d_u (n % 10);
	}
	else
	{
		counter += ft_print_c (n + '0');
	}
	return (counter);
}
