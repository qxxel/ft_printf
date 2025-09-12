/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:36:43 by agerbaud          #+#    #+#             */
/*   Updated: 2025/09/12 10:24:06 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../includes/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd, int *nb_char);
void	ft_putstr_fd(char *s, int fd, int *nb_char);
void	ft_putnbr_fd(int n, int fd, int *nb_char);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd, int *nb_char);
void	ft_puthexa(unsigned int nbr, char *base, int *nb_char);
void	ft_putpointer(unsigned long long nbr, int *nb_char, int first);
size_t	ft_strlen(const char *s);

#endif
