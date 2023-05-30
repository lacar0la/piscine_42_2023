/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:54:38 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/30 17:54:39 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_rev_int_tab(char *tab, int size)
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

void	ft_sort_int_tab(char *tab, int size)
{
	int	high;
	int	saved;
	int	position;
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	while (i < size)
	{
		high = tab[i];
		while (cont < size)
		{
			position = tab[cont];
			if (high >= position)
			{
				tab[i] = high;
				tab[cont] = position;
			}
			else
			{
				high = position;
				saved = tab[i];
				tab[i] = tab[cont];
				tab[cont] = saved;
			}
			cont++;
		}
		cont = 1 + i;
		i++;
	}
	ft_rev_int_tab(tab, size);
}

int main (int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i != argc)
	{
		while (argv[i][j] != '\0')
		{
			ft_sort_int_tab(argv[i], argc);
		}
		j = 0;
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
