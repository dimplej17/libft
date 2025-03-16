/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:19:14 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/11 15:58:27 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char m[10] = "Hello";
// 	printf("%s\n", m);
// 	ft_bzero(m, 3);
// 	printf("your output: %s\n", m);
// 	char b[10] = "Hello";
// 	printf("%s\n", b);
// 	bzero(b, 3);
// 	printf("in-built function output: %s\n", b);
// 	return (0);
// }