/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:27:27 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/14 21:36:27 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//   The strchr() function locates the first occurrence of c (converted to a
//      char) in the string pointed to by s.  The terminating null character is
//      considered to be part of the string; therefore if c is `\0', the func-
//      tions locate the terminating `\0'.

//      The strrchr() function is identical to strchr(), except it locates the
//      last occurrence of c.

// RETURN VALUES
//      The functions strchr() and strrchr() return a pointer to the located
//      character, or NULL if the character does not appear in the string.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	size_t			i;
	size_t			s_len;

	a = (unsigned char)c;
	i = 0;
	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + s_len));
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "gRdhsRdhf";
// 	int c = 'd';
// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s\n", strchr(s, c));
// 	return (0);
// }