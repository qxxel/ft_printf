/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:16:07 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/20 15:16:29 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	all_char;
	char	*final;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	all_char = ft_strlen(s1) + ft_strlen(s2) + 1;
	final = (char *)malloc(all_char * sizeof(char));
	if (!final)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		final[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		final[i + j] = s2[j];
		j++;
	}
	final[i + j] = 0;
	return (final);
}
