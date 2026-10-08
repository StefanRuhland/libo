/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:07:35 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:00:40 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (little[i])
		return ((char *)&big[i]);
	if (big == NULL || little == NULL)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[j + i] && little[j] && (j + i != len) && big[j + i] == little[j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
