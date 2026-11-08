/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:00:42 by ajoundi           #+#    #+#             */
/*   Updated: 2026/11/07 11:55:05 by ajoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	dst_len;
	size_t	index;
	size_t	i;

	dst_len = 0;
	while (dst_len < dstsize && d[dst_len])
	{
		dst_len++;
	}
	if (dstsize == 0)
		return (ft_strlen(s));
	index = dst_len;
	i = 0;
	while (s[i] && (i + index + 1) < dstsize)
	{
		d[index + i] = s[i];
		i++;
	}
	if (index + i < dstsize)
		d[index + i] = '\0';
	if (dstsize <= dst_len)
		return (ft_strlen(s) + dstsize);
	else
		return (ft_strlen(s) + dst_len);
}
