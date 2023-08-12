/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:01:06 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:58:56 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	int	pchars;

	pchars = 0;
	if (n >= 10)
	{
		pchars += ft_print_u(n / 10);
		pchars += ft_print_u(n % 10);
	}
	else
		pchars += ft_print_c(n + '0');
	return (pchars);
}
