/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:03:31 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/16 21:45:14 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters: s: The string to be split.
//             c: The delimiter character.

// The array of new strings resulting from the split.NULL if the allocation
//  fails.

// 	Allocates memory(using malloc(3)) and
// 	returns an array of strings obtained by splitting ’s’ using the character
//     ’c’ as a delimiter.The array must end with a NULL pointer.

// Notes for myself:
// split_strings[count_array] = ft_substr(s, 0, ((end_index-start_index) + 2));
// extra +1 coz null terminating the individual string?

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (s[i + 1] != c))
		{
			count++;
		}
		i++;
	}
	return (count + 1);
}

static size_t	ft_end_index(unsigned int start_index, const char *s, char c)
{
	while (s[start_index + 1] != '\0')
	{
		if (s[start_index + 1] != c && (s[start_index + 2] == c || s[start_index
				+ 2] == '\0'))
			return (start_index + 1);
		start_index++;
	}
	return (start_index);
}

static void	ft_free_memory(char **split_strings, size_t total_word_count)
{
	size_t	i;

	i = 0;
	while (i < total_word_count)
	{
		free(split_strings[i]);
		i++;
	}
	free(split_strings);
}

static char	**ft_strings_split(size_t i, char c, char const *s,
		char **split_strings, unsigned int count_array, size_t total_word_count)
{
	size_t	start_index;
	size_t	end_index;

	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			start_index = i + 1;
			end_index = ft_end_index(i + 1, s, c);
			split_strings[count_array] = ft_substr(s, start_index, ((end_index
							- start_index) + 1));
			if (split_strings[count_array] == NULL)
			{
				ft_free_memory(split_strings, total_word_count);
				return (NULL);
			}
			count_array++;
		}
		i++;
	}
	split_strings[total_word_count] = NULL;
	return (split_strings);
}

char	**ft_split(char const *s, char c)
{
	char			**split_strings;
	size_t			i;
	size_t			total_word_count;
	unsigned int	end_index;
	unsigned int	count_array;

	i = 0;
	count_array = 0;
	if (s == NULL)
		return (NULL);
	total_word_count = ft_word_count(s, c);
	split_strings = malloc((total_word_count + 1) * sizeof(char *));
	if (split_strings == NULL)
		return (NULL);
	if (s[0] != c)
	{
		while (s[i] != '\0')
		{
			if (s[i + 1] == c && s[i + 2] != c)
			{
				end_index = i;
				split_strings[count_array] = ft_substr(s, 0, end_index + 1);
				if (split_strings[count_array] == NULL)
					ft_free_memory(split_strings, total_word_count);
				count_array++;
				i++;
				break ;
			}
			i++;
		}
	}
	return (ft_strings_split(i, c, s, split_strings, count_array,
			total_word_count));
}

int	main(void)
{
	const char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char c = 'i';
	char **result = ft_split(s, c);
	unsigned int i = 0;
	while (result[i] != NULL)
	{
		printf("split_string[%u] = %s\n", i, result[i]);
		i++;
	}
	printf("split_string[%u] = %s\n", i, result[i]);
	return (0);
}