/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:51:35 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/16 16:48:35 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned long long nbr, char *base, int fd, int *nb_char)
{
	int	base_len;

	if (fd == 2)
	{
		fd = 1;
		ft_putstr_fd("0x", 1, nb_char);
	}
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return ;
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base, fd, nb_char);
		nbr %= base_len;
	}
	ft_putchar_fd(base[nbr], fd, nb_char);
}
