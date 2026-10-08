/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:19:24 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:04:08 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_len(int n)
{
	int	len;

	len = 0;
	while (n < -9 || n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	if (n < 0)
		len++;
	return (len);
}

void	ft_to_str(char *string, int i, int n, int len)
{
	string[len] = '\0';
	len--;
	while (len >= i)
	{
		string[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*stringo;
	int		len;
	int		i;
	int		neg;

	i = 0;
	len = ft_get_len(n);
	neg = 1;
	stringo = malloc(sizeof(char) * (len + 1));
	if (stringo == NULL)
		return (NULL);
	if (n < 0)
	{
		stringo[i] = '-';
		i++;
		neg = -1;
	}
	if (n == -2147483648)
	{
		stringo[i] = '2';
		i++;
		n = -147483648;
	}
	ft_to_str(stringo, i, n * neg, len);
	return (stringo);
}
