/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:10:54 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 22:10:54 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char			*s;
	unsigned char			*d;

	i = len;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == src)
		return (dst);
	else if (d > s)
	{
		while (i-- > 0)
			*(d + i) = *(s + i);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (d);
}
