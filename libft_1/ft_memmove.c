/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:42:25 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 17:55:37 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr_source;

	i = 0;
	ptr = (unsigned char *)dest;
	ptr_source = (unsigned char *)src;
	if ((ptr > ptr_source) && (ptr < ptr_source + n))
	{
		i = n;
		while (i >= 0)
		{
			i--;
			ptr[i] = (unsigned char)ptr_source[i];
		}
	}
	else
	{
		while (i < n)
		{
			ptr[i] = (unsigned char)ptr_source[i];
			i++;
		}
	}
	return (dest);
}
