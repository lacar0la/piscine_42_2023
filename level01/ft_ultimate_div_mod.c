/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:11:40 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/18 18:11:45 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cal_div;
	int	cal_mod;

	cal_div = (*a / *b);
	cal_mod = (*a % *b);
	*a = cal_div;
	*b = cal_mod;
}
