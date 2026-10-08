/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:39:45 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:17:40 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

void	*calloc(size_t n, size_t size)
{
	void	*array;
	int		i;

	array = malloc(n * size);
	if (n == 0 || size == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ft_memset(array, 0, size);
		i++;
	}
	return (array);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
