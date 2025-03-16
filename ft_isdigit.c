/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:25:52 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/11 12:57:19 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	int output_yours = ft_isdigit(']');
// 	printf("your output: %i\n", output_yours);
//  int output_comp = isdigit(']');
//  printf("in-built function output: %i\n", output_comp);
// 	return(0);
// }