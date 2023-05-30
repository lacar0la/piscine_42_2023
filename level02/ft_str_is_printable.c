/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:08:23 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/22 09:09:30 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
