/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:48:10 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:06:45 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strdup(const char *s)
{
	char	*new_string;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	new_string = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		new_string[i] = s[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

int	ft_strlen(char c)
{
	int	i;

	i = 0;
	while (c[i] != '\n')
		i++;
	return (i);
}
