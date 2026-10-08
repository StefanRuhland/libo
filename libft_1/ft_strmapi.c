/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:20:10 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 17:58:27 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*schdring;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len] != '\0')
		len++;
	schdring = malloc(sizeof(char) * (len + 1));
	if (schdring == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		schdring[i] = f((unsigned int)i, s[i]);
		i++;
	}
	schdring[i] = '\0';
	return (schdring);
}
