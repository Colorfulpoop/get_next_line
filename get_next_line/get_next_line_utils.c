/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:34:00 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 16:34:03 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*str;

	str = malloc(elementCount * elementSize);
	if (!str)
		return (NULL);
	ft_bzero(str, elementCount * elementSize);
	return (str);
}

char	*ft_strchr(const char *string, int searchedChar)
{
	char	*str;

	str = (char *) string;
	while (*str != searchedChar && *str != 0)
		str++;
	if (*str == searchedChar)
		return (str);
	else
		return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_total;
	char	*str;
	int		i;
	int		j;

	size_total = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (size_total + 1));
	if (!str || !s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	str[size_total] = 0;
	return (str);
}
