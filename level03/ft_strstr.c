/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:29:42 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/25 16:29:44 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	longitud(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	coincidencia(char *str, char *to_find, int x, int i)
{
	int	long_find;

	long_find = longitud(to_find);
	while (str[x] == to_find[i])
	{
		x++;
		i++;
		if (i == long_find)
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		if (str[x] == to_find[i] && coincidencia(str, to_find, x, i) == 1)
		{
			return (&str[x]);
		}
		else
		{
			x++;
		}
	}
	return (NULL);
}
