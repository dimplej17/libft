/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:30:35 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/16 20:48:43 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_int_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
	}
	if (n == 0)
		return (1);
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	size_t	i;
	char	*str;

	if (n < 0)
	{
		n_len = ft_int_len(n) + 1;
	}
	else
		n_len = ft_int_len(n);
	i = n_len;
	str = malloc((n_len + 1) * sizeof(char));
	if (n < 0)
	{
		str[0] = '-';
		while (i-- && i > 0)
		{
			str[i] = (n % 10) + '0';
			n = n / 10;
		}
		str[n_len] = '\0';
		return (str);
	}
	while (i--)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[n_len] = '\0';
	return (str);
}

int	main(void)
{
	int n = 00000;
	printf("%s\n", ft_itoa(n));
	return (0);
}