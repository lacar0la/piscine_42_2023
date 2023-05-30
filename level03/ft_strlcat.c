/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:10:47 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/26 17:10:50 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	len(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_ori;
	unsigned int	i;
	unsigned int	cont;

	len_ori = len(src);
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if(size == 0)
	{
		return(i);
	}
	cont = 0;
	while (dest[cont] != '\0' && size > 0)
	{
			dest[cont] = src[cont];
			cont++;
			size--;
	}
	dest[i + cont] = '\0';
	return (len_ori + cont);
}
int main()
{
   char destino[25] = "hi";
   char origen[6] = "amigos";
   int p;

   printf( "destino=%s\t", destino );
   printf( "origen=%s\n", origen );
   p = ft_strlcat( destino, origen, 0 );
   printf( "destino=%s\n", destino );
   printf( "origen=%s\n", origen );
   printf( "retorno=%d\n", p );
   return 0;
}
