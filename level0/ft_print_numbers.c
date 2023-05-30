/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:36:54 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/11 17:15:38 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	int		num;
	char	ascii;

	num = 0;
	while (num <= 9)
	{
		ascii = num + '0';
		write(1, &ascii, 1);
		num++;
	}
}
