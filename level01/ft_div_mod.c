/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:34:23 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/17 14:34:30 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	cal_div;
	int	cal_mod;

	cal_div = (a / b);
	cal_mod = (a % b);
	*div = cal_div;
	*mod = cal_mod;
}
