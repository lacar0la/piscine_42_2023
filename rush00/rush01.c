/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahernan <lahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:00:14 by lahernan          #+#    #+#             */
/*   Updated: 2023/03/12 16:31:27 by lahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	pt_first_line(int x)
{
	int	cont_x;

	cont_x = 1;
	while (cont_x <= x)
	{
		if (cont_x == 1)
		{
			write(1, "/", 1);
		}
		else if (cont_x == x)
		{
			write(1, "\\", 1);
		}
		else
		{
			write(1, "*", 1);
		}
		cont_x++;
	}	
}

void	pt_last_line(int x)
{
	int	cont_x;

	cont_x = 1;
	while (cont_x <= x)
	{
		if (cont_x == 1)
		{
			write(1, "\\", 1);
		}
		else if (cont_x == x)
		{
			write(1, "/", 1);
		}
		else
		{
			write(1, "*", 1);
		}
		cont_x++;
	}	
}

void	pt_body(int x)
{
	int	cont_x;

	cont_x = 1;
	while (cont_x <= x)
	{
		if (cont_x == 1)
		{
			write(1, "*", 1);
		}
		else if (cont_x == x)
		{
			write(1, "*", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		cont_x++;
	}
}

void	rush01(int x, int y)
{
	int	cont_y;

	cont_y = 1;
	while (cont_y <= y)
	{
		if (cont_y == 1)
		{
			pt_first_line(x);
		}
		else if (cont_y == y)
		{
			pt_last_line(x);
		}
		else
		{
			pt_body(x);
		}
		cont_y++;
		write(1, "\n", 1);
	}
}
