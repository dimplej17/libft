/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:30:35 by djanardh          #+#    #+#             */
/*   Updated: 2025/03/16 21:06:46 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters
// s: The string to iterate over.
// f: The function to apply to each character.

// Description
// Applies the function ’f’ to each character of the string passed as argument,
// passing its index as the first argument. Each character is passed by address
// to ’f’ so it can be modified if necessary.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, (char *)&s[i]);
		i++;
	}
}
