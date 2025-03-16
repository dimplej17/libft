/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:02:23 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/16 21:35:01 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters
// s: The string to output.
// fd: The file descriptor on which to write.

// Description
// Outputs the string ’s’ to the specified file descriptor followed by a
// newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	write(fd, s, s_len);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char *print_string = "Cows are cute";
// 	ft_putendl_fd(print_string, 1);
// 	return (0);
// }