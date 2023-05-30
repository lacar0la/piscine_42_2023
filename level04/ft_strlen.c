/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:02:28 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/26 17:02:30 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*(str + cont) != '\0')
	{
		cont++;
	}
	return (cont);
}
