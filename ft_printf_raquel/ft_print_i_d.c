/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:24:17 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:13:37 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i_d(int n)
{
	int pchars;

	pchars = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return(11) ;
	}
	if (n < 0)
	{
		n *= -1;
		pchars += ft_print_c('-');
	}
	if (n >= 10)
	{
		pchars += ft_print_i_d(n / 10);
		pchars += ft_print_i_d(n % 10);
	}
	else
		pchars += ft_print_c(n + '0');
	return (pchars);
}
