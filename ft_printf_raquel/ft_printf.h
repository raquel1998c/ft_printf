/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:12:48 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:39:48 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_c(char c);
int	ft_print_str(char *str);
int	ft_print_i_d(int n);
int	ft_print_u(unsigned int n);
int	ft_print_hexaup(unsigned int n);
int	ft_print_hexa(unsigned int n);
int	ft_print_ptr(size_t mem);
#endif