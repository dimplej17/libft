/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:08:26 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/14 14:24:27 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcpy() and strlcat() take the full size of the destination buffer and
//      guarantee NUL-termination if there is room.  Note that room for the NUL
//      should be included in dstsize.

//      strlcpy() copies up to dstsize
// - 1 characters from the string src to dst,
//      NUL-terminating the result if dstsize is not 0.

//      strlcat() appends string src to the end of dst.  It will append at most
//      dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
// 		unless
//      dstsize is 0 or the original dst string was longer than dstsize (in prac
// -tice this should not happen as it means that either dstsize is incorrect
//      or that dst is not a proper string).

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while ((src[i] != '\0' && (dst_len + i < dstsize - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char *dst = "hello";
// 	char *src = "worldhjgh";
// 	size_t dstsize = 2;
// 	printf("your fn: %zu\n", ft_strlcat(dst, src, dstsize));
// 	printf("comp fn: %zu\n", strlcat(dst, src, dstsize));
// 	return (0);
// }