/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:23:06 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/11 12:56:52 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	int output_yours = ft_isalnum('\'');
// 	printf("your output: %i\n", output_yours);
//  int output_comp = isalnum('\'');
//  printf("in-built function output: %i\n", output_comp);
// 	return(0);
// }