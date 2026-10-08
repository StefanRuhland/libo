/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:16:49 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:00:47 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char s1, const char s2, size_t n)
{
	int				i;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	string1 = (unsigned char *s1);
	string2 = (unsigned char *s2);
	while (i < n)
	{
		if (!string1[i] && !string2[i])
			return (0);
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
	}
	return (0);
}
