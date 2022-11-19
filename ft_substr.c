/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:38:48 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/03 13:07:29 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	v;

	i = start;
	v = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] && v < len)
	{
		i++;
		v++;
	}
	substr = malloc(sizeof(char) * v + 1);
	if (!substr)
		return (NULL);
	i = start;
	v = 0;
	while (i < ft_strlen(s) && v < len)
		substr[v++] = s[i++];
	substr[v] = '\0';
	return (substr);
}

/* #include <stdio.h>

int main()
{
	char s[] = "ola caralho";
	int start = 2;
	size_t len = 3;
	printf("%s\n", ft_substr(s, start, len));
} */