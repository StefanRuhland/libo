/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:36:04 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:19:56 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	count;
	int	result;

	i = 0;
	count = 1;
	if (nptr == NULL)
		return (NULL);
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == ' ' || nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			count = -1;
		i++;
	}
	j = 1;
	while (nptr[i] > '0' && nptr[i] < '9')
		i++;
	while (nptr[i] > '0' && nptr[i] < '9')
	{
		result += (nptr[i] - 48) * j;
		i--;
		j *= 10;
	}
	result *= count;
	return (result);
}
