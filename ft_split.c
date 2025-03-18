/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:03:31 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/18 21:39:54 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // Parameters: s: The string to be split.
// //             c: The delimiter character.

// // The array of new strings resulting from the split.NULL if the allocation
// //  fails.

// // 	Allocates memory(using malloc(3)) and
// // 	returns an array of strings obtained by splitting ’s’ using the character
// //     ’c’ as a delimiter.The array must end with a NULL pointer.

// // Notes for myself:
// // split_strings[count_array] = ft_substr(s, 0, ((end_index-start_index) + 2));
// // extra +1 coz null terminating the individual string?

#include "libft.h"

static unsigned int	ft_word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c && s[i + 2] != '\0')
		{
			count++;
		}
		i++;
	}
	return (count + 1);
}

static void	ft_free_memory(char **split_strings, size_t count_array)
{
	while (count_array--)
	{
		free(split_strings[count_array]);
	}
	free(split_strings);
}

char	**ft_split(char const *s, char c)
{
	char			**split_strings;
	unsigned int	end_index;
	unsigned int	start_index;
	unsigned int	count_array;
	unsigned int	i;

	i = 0;
	count_array = 0;
	if (!s) {
		printf("I am here!");
		return (NULL);
	}
	if (s[0] == '\0')
	{
		split_strings = malloc(sizeof(char *));
		split_strings[0] = "\0";
		return (split_strings);
	}
	split_strings = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (split_strings == NULL)
		return (NULL);
	printf("I am here!2");
	printf("%s\n", s);
	while (s[i] != '\0' && i == ft_strlen(s))
	{
		if (s[i] != c)
		{
			start_index = i;
			while (s[i] != '\0' && i == ft_strlen(s))
			{
				if (s[i + 1] == c || s[i + 1] == '\0')
				{
					end_index = i;
					split_strings[count_array] = ft_substr(s, start_index,
						(end_index - start_index) + 1);
					printf("%s\n", split_strings[count_array]);
					if (split_strings[count_array] == NULL)
						printf("I am here!2");
						return (ft_free_memory(split_strings, count_array),
							NULL);
					count_array++;
					break ;
				}
				i++;
			}
		}
		i++;
	}
	split_strings[ft_word_count(s, c)] = "\0";
	return (split_strings);
}

int	main(void)
{
	// const char *s = "      split       this for   me  !       ";
	const char *s = "afgfgag sgdfgsdf fgsgdfdsg";
	// const char *s = "\0aa\0bbb";
	char c = ' ';
	// printf("%u\n", ft_word_count(s, c));
	char **result = ft_split(s, c);
	unsigned int i = 0;
	while (!(result[i]))
	{
		printf("split_string[%u] = %s\n", i, result[i]);
		i++;
	}
	// printf("split_string[%u] = %s\n", i, result[i]);

	// char **s = ft_split("lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	return (0);
}

// =========================================================================================

// static int	ft_count_words_delimited(char const *str, char c)
// {
// 	size_t	count;
// 	size_t	iter;

// 	count = 0;
// 	iter = 0;
// 	while (str[iter] != '\0')
// 	{
// 		if (str[iter] != c)
// 		{
// 			count++;
// 			while (str[iter] && str[iter] != c)
// 				iter++;
// 			if (str[iter] == '\0')
// 				return (count);
// 		}
// 		iter++;
// 	}
// 	return (count);
// }

// static void	free_all(char **word)
// {
// 	int	i;

// 	i = 0;
// 	while (word[i])
// 	{
// 		free(word[i]);
// 		i++;
// 	}
// 	free(word);
// }

// static int	split_loop(char const *s, char c, char **word)
// {
// 	int	len;
// 	int	iter;

// 	iter = 0;
// 	while (*s)
// 	{
// 		if (*s != c)
// 		{
// 			len = 0;
// 			while (*s && *s != c && ++len)
// 				++s;
// 			word[iter] = ft_substr(s - len, 0, len);
// 			if (!word[iter])
// 			{
// 				free_all(word);
// 				return (0);
// 			}
// 			iter++;
// 			if (*s == '\0')
// 				break ;
// 		}
// 		++s;
// 	}
// 	word[iter] = 0;
// 	return (1);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**word;
// 	int		result;

// 	if (!s)
// 		return (NULL);
// 	word = (char **) malloc(sizeof(char *)
// 			* (ft_count_words_delimited(s, c) + 1));
// 	if (word == NULL)
// 		return (0);
// 	result = split_loop(s, c, word);
// 	if (result == 0)
// 		return (NULL);
// 	return (word);
// }

// int	main(void)
// {
// 	// const char *s = "      split       this for   me  !       ";
// 	const char *s = "\0aa\0bbb";
// 	char c = '\0';
// 	// printf("%u\n", ft_word_count(s, c));
// 	char **result = ft_split(s, c);
// 	unsigned int i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("split_string[%u] = %s\n", i, result[i]);
// 		i++;
// 	}
// 	// printf("split_string[%u] = %s\n", i, result[i]);

// 	// char **s = ft_split("lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
// 	return (0);
// }
