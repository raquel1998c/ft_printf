/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-mato <ade-mato@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:59:32 by ade-mato          #+#    #+#             */
/*   Updated: 2023/08/12 19:45:27 by ade-mato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	(*ft_gogetit(char c))

{
	if (c == 'c')
		return (ft_print_c);
	if (c == 's')
		return (ft_print_str);
	if (c == 'i')
		return (ft_print_i_d);
	if (c == 'd')
		return (ft_print_i_d);
	if (c == 'u')
		return (ft_print_u);
	if (c == 'x')
		return (ft_print_hexa);
	if (c == 'X')
		return (ft_print_hexaup);
	if (c == 'p')
		return (ft_print_ptr);
	else
		return (NULL);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_gogetit(format[++i]))
		{
			len += ((int (*)())ft_gogetit(format[i]))(va_arg(args, void *));
			i++;
		}
		else
			len += write(1, &format[i++], 1);
	}
	va_end (args);
	return (len);
}

// int main()
// {
// 	int		mine = 0;
// 	int		original = 0;
// 	printf("\t\t///PRINTING CHARS AND STRINGS\\\\\\\n");
// 	char	*str = "Print this.";
// 	mine = ft_printf("%s\n", str);
// 	original = printf("%s\n", str);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf
// 	("Print the first character of the previous phrase: %c\n", str[0]);
// 	original = printf
// 	("Print the first character of the previous phrase: %c\n", str[0]);
// 	printf("%i and %i\n", mine, original);

// 	printf("\t\t///PRINTING NUMBERS\\\\\\\n");
// 	int	x = -2147483648;
// 	mine = ft_printf("Using %%i: %i\n", x);
// 	original = printf("Using %%i: %i\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%d: %d\n", x);
// 	original = printf("Using %%d: %d\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%u: %u\n", x);
// 	original = printf("Using %%u: %u\n", x);
// 	printf("%i and %i\n", mine, original);

// 	printf("\t\t///MEMORY AND HEX\\\\\\\n");
// 	x = 2765;
// 	mine = ft_printf("Using %%x: %x\n", x);
// 	original = printf("Using %%x: %x\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%X: %X\n", x);
// 	original = printf("Using %%X: %X\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%p: %p\n", &x);
// 	original = printf("Using %%p: %p\n", &x);
// 	printf("%i and %i\n", mine, original);
// 	return (0);
// }