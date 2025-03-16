/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:57:46 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/11 13:04:13 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	size_t output_yours = ft_strlen("[]\\ ");
// 	printf("your output: %zu\n", output_yours);
// 	size_t output_comp = strlen("[]\\ ");
// 	printf("in-built function output: %zu\n", output_comp);
// 	return (0);
// }