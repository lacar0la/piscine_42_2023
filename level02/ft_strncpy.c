/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:15:38 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/21 13:15:42 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (flag == 0)
		{
			dest[i] = src[i];
			if (src[i] == '\0')
				flag = 1;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}







int main(void)
{
    char            original[] = "hola_mundo";
    char            copia[] = "abcdeisips";
    unsigned int    n;
    
    n = 2;
    ft_strncpy(copia, original, n);
    printf("%s ", original);

    printf("%s ", copia);
}

