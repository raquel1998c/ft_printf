/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:33:49 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:39:25 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char*str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!str)
	{
		counter = write (1, "(null)", 6);
		return (counter);
	}
	while (str[i])
	{
		counter += write (1, &str[i], 1);
		i++;
	}
	return (counter);
}
