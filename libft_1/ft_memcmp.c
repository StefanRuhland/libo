/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:23:54 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:13:04 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	size_t			j;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	j = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	if (n == 0)
		return (i);
	while (j != n && (string1[j] - string2[j]) == 0)
		j++;
	i += string1[j] - string2[j];
	return (i);
}
