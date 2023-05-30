/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:44:25 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/20 10:44:51 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
