/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:22:48 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:12:21 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*stringo;
	unsigned char	co;

	i = 0;
	stringo = (unsigned char *)s;
	co = (unsigned char)c;
	while (i != n && stringo[i] != co)
		i++;
	if (stringo[i] == co)
		return (&s[i]);
	else
		return (NULL);
}
