/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:43:05 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/13 15:12:55 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The atoi() function converts the initial portion of the string pointed to by
// str to int representation.
// atoi stands for ASCII To Integer. The atoi() is a library function in C that
// converts the numbers in string form to their integer value.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char *str = "-567";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }