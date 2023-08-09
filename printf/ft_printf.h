/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:12:48 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/09 17:33:56 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_print_hexa(unsigned int n);
int	ft_print_c(char c);
int	ft_print_hexaup(unsigned int n);
int	ft_print_i_d_u(long int n);
int	ft_print_ptr(unsigned long int mem);
int	ft_print_str(char*str);
int	ft_printf(const char *str, ...);
#endif
