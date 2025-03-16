/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:04:55 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/11 18:37:03 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// gfdffg
/// @brief djkhfkfh 'ghf'
/// dksfhsfghsk
/// @param b dfmbdbf
/// @return fkhdhkhfkkfh
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char m[10];
// 	ft_memset(m, '6', sizeof(m));
// 	printf("your output: %s\n", m);
// 	char b[10];
// 	memset(b, '6', sizeof(b));
// 	printf("in-built function output: %s\n", b);
// 	return (0);
// }