/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:57:41 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/22 09:57:46 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

void	reglas(char str[], int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		else if (i > 0)
		{
			reglas(str, i);
		}
		i++;
	}
	return (str);
}
