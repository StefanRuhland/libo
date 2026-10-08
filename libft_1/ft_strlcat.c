/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:15:48 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:10:39 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	j = i + size -1;
	while (i < j)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (i + 1);
}
