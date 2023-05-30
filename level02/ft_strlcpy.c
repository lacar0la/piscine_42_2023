/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:19:13 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/22 10:19:15 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *str, char *src, unsigned int size)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (i < size)
	{
		if (flag == 0)
		{
			str[i] = src[i];
			if (src[i] == '\0')
				flag = 1;
		}
		else
		{
			str[i] = '\0';
		}
		i++;
	}
	str[i] = '\0';
	return (i);
}
