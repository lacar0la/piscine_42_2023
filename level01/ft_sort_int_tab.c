/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:21:48 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/20 14:22:17 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	copia;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		copia = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - 1 - i] = copia;
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	mayor;
	int	guardado;
	int	posicion;
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	while (i < size)
	{
		mayor = tab[i];
		while (cont < size)
		{
			posicion = tab[cont];
			if (mayor >= posicion)
			{
				tab[i] = mayor;
				tab[cont] = posicion;
			}
			else
			{
				mayor = posicion;
				guardado = tab[i];
				tab[i] = tab[cont];
				tab[cont] = guardado;
			}
			cont++;
		}
		cont = 1 + i;
		i++;
	}
	ft_rev_int_tab(tab, size);
}
