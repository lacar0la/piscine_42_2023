/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:45:43 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/23 10:49:13 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_condition(char uni_a, char uni_b, char dec_a, char dec_b)
{
	if (uni_a == uni_b && dec_a == dec_b)
	{
		write(1, "", 1);
	}
	else
	{
		write(1, &dec_a, 1);
		write(1, &uni_a, 1);
		write(1, " ", 1);
		write(1, &dec_b, 1);
		write(1, &uni_b, 1);
		if (!(uni_a == '8' && dec_a == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	decenas_unidades(int a, int b)
{
	char	uni_a;
	char	uni_b;
	char	dec_a;
	char	dec_b;

	while (b <= 99)
	{
		dec_a = a / 10 + '0';
		uni_a = a % 10 + '0';
		dec_b = b / 10 + '0';
		uni_b = b % 10 + '0';
		print_condition(uni_a, uni_b, dec_a, dec_b);
		b++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		decenas_unidades(a, b);
		a++;
	}
}
