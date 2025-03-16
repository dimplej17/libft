/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:06:00 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/15 19:39:46 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_int_len(int n)
{
	size_t	i;

	i = 0;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_putnbr(int n)
{
	size_t	nbr_len;
	char	*s;
	long	temp;
	int		i;

	nbr_len = ft_int_len(n);
	s = malloc(nbr_len + 1);
	if (s == NULL)
		return (NULL);
	temp = n;
	if (temp < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	i = 0;
	if (n == 0)
		s[i++] = '0';
	while (n > 0)
	{
		s[i++] = '0' + (n % 10);
		n /= 10;
	}
	return (s); // reverse it and return it, pls thanks
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	nbr_len;
	char	*s;

	nbr_len = ft_int_len(n);
	s = ft_putnbr(n);
	write(fd, s, (4 * nbr_len));
}

int	main(void)
{
	int n = 12345;
	ft_putnbr_fd(n, 1);
	return (0);
}