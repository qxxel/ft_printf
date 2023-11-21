/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:44:16 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/20 14:22:59 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd, int *nb_char)
{
	char	c_unsigned;

	c_unsigned = (unsigned char)c;
	if (write(fd, &c_unsigned, 1) < 0)
	{
		(*nb_char) = -2;
		return ;
	}
	(*nb_char)++;
}
