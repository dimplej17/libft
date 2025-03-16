/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:28:56 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/13 16:58:13 by djanardh         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	int				i;

	a = (unsigned char)c;
	i = ft_strlen(s) + 1;
	while (i--)
	{
		if ((unsigned char)s[i] == a)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "gRdhsRdhf";
// 	int c = '\0';
// 	printf("%s\n", ft_strrchr(s, c));
// 	printf("%s\n", strrchr(s, c));
// 	return (0);
// }