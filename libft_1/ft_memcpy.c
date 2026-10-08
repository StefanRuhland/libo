/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:12:42 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 17:53:46 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr_source;

	i = 0;
	ptr = (unsigned char *)dest;
	ptr_source = (unsigned char *)src;
	while (i < n)
	{
		ptr[i] = (unsigned char)ptr_source[i];
		i++;
	}
	return (dest);
}
