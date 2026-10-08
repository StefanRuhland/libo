/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruhland <sruhland@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:22:21 by sruhland          #+#    #+#             */
/*   Updated: 2026/10/08 18:02:29 by sruhland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	if (fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
