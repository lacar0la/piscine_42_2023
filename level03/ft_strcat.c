/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:25:03 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/24 10:25:06 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	longitud(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	largo_dest;
	int	largo_ori;
	int	cont;

	largo_dest = longitud(dest);
	largo_ori = longitud(src);
	i = largo_dest;
	cont = 0;
	while (cont < largo_ori)
	{
		dest[i] = src[cont];
		i++;
		cont++;
	}
	dest[i] = '\0';
	return (dest);
}
