/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:26:20 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/16 16:58:30 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_what_type(char c, va_list *ap, int *nb_char)
{
	char	*hexa1;
	char	*hexa2;

	hexa1 = "0123456789abcdef";
	hexa2 = "0123456789ABCDEF";
	if (c == 'c')
		ft_putchar_fd(va_arg(*ap, int), 1, nb_char);
	else if (c == 's')
		ft_putstr_fd(va_arg(*ap, char *), 1, nb_char);
	else if (c == 'p')
		ft_putnbr_base(va_arg(*ap, unsigned long long), hexa1, 2, nb_char);
	else if (c == 'd')
		ft_putnbr_fd(va_arg(*ap, int), 1, nb_char);
	else if (c == 'i')
		ft_putnbr_fd(va_arg(*ap, int), 1, nb_char);
	else if (c == 'u')
		ft_putnbr_fd(va_arg(*ap, unsigned int), 1, nb_char);
	else if (c == 'x')
		ft_putnbr_base(va_arg(*ap, unsigned int), hexa1, 1, nb_char);
	else if (c == 'X')
		ft_putnbr_base(va_arg(*ap, unsigned int), hexa2, 1, nb_char);
	else
		return (0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ok;
	int		nb_char;
	va_list	ap;

	va_start(ap, format);
	i = 0;
	nb_char = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar_fd(format[i++], 1, &nb_char);
		else
		{
			ok = ft_what_type(format[i + 1], &ap, &nb_char);
			if (!ok)
			{
				ft_putchar_fd(format[i], 1, &nb_char);
				ft_putchar_fd(format[i + 1], 1, &nb_char);
			}
			i = i + 2;
		}
	}
	va_end(ap);
	return (nb_char);
}
