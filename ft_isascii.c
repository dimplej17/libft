/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:43:30 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/11 12:57:13 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	int output_yours = ft_isascii(' ');
// 	printf("your output: %i\n", output_yours);
//  int output_comp = isascii(' ');
//  printf("in-built function output: %i\n", output_comp);
// 	return(0);
// }