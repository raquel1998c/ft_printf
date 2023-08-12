/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:33:49 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:58:26 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;
	int	pchars;

	i = 0;
	pchars = 0;
	if (!str)
	{
		pchars += write (1, "(null)", 6);
		return (pchars);
	}
	while (str[i] != '\0')
	{
		pchars += write (1, &str[i], 1);
		i++;
	}
	return (pchars);
}
