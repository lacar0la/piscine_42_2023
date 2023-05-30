/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:46:48 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/25 15:46:53 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	cont = 0;
	while (src[cont] != '\0' && nb > cont)
	{
		dest[i + cont] = src[cont];
		cont++;
	}
	dest[i + cont] = '\0';
	return (dest);
}
