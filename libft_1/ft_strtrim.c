/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:45:33 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:18:06 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;

	i = 0;
	start = 0;
	while (ft_in(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (ft_in(s1[end], set))
	{
		end--;
	}
	trimmed = malloc(sizeof(char) * (end - start + 1));
	while (start + i <= end)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

int	ft_in(char is, char const *in)
{
	int	i;

	i = 0;
	while (in[i] != '\0')
	{
		if (is == in[i])
			return (1);
		i++;
	}
	return (0);
}
