/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:19:09 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:02:04 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_add_word(int j, char const *s, char c, char **string_array);
int		ft_count_words(char const *s, char c);
int		ft_count_letters(char const*s, char c);
void	ft_free(char **string_array, int word_count);

char	**ft_split(const char *s, char c)
{
	char	**string_array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	string_array = malloc(sizeof(char *) * (ft_count_words((char *)s, c) + 1));
	if (string_array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			if (!ft_add_word(j, &s[i], c, string_array))
				return (NULL);
			i += ft_count_letters(&s[i], c);
			j++;
		}
	}
	string_array[j] = NULL;
	return (string_array);
}

int	ft_add_word(int j, char const *s, char c, char **string_array)
{
	int	i;

	i = 0;
	string_array[j] = malloc(sizeof(char) * (ft_count_letters(&s[i], c) + 1));
	if (string_array[j] == NULL)
	{
		ft_free(string_array, j);
		return (0);
	}
	while (*(s + i) != c && *(s + i) != '\0')
	{
		string_array[j][i] = *(s + i);
		i++;
	}
	string_array[j][i] = '\0';
	return (1);
}

int	ft_count_words(char const *s, char c)
{
	int		word_count;
	int		letter_count;

	word_count = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			word_count++;
		}
	}
	return (word_count);
}

int	ft_count_letters(char const *s, char c)
{
	int	letter_count;

	letter_count = 0;
	while (*(s + letter_count) != c && *(s + letter_count) != '\0')
	{
		letter_count++;
	}
	return (letter_count);
}

void	ft_free(char **string_array, int word_count)
{
	while (word_count >= 0)
	{
		free(string_array[word_count]);
		word_count--;
	}
	free(string_array);
}
