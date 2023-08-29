/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:24:56 by bvasseur          #+#    #+#             */
/*   Updated: 2023/08/20 17:13:23 by mhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_rectangle(int x, int y, int xpos, int ypos)
{
	if ((xpos == 0 && ypos == 0) || (xpos +1 == x && ypos +1 == y))
	{
		ft_putchar('/');
		return ;
	}	
	if ((xpos == 0 && ypos +1 == y) || (xpos +1 == x && ypos == 0))
	{
		ft_putchar('\\');
		return ;
	}
	if ((xpos == 0) || (xpos + 1 == x))
	{
		ft_putchar('*');
		return ;
	}
	if ((ypos == 0) || (ypos + 1 == y))
	{
		ft_putchar('*');
		return ;
	}
	ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	xpos;
	int	ypos;

	ypos = 0;
	xpos = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "invalid number", 14);
		return ;
	}
	while (ypos < y)
	{
		xpos = 0;
		while (xpos < x)
		{
			ft_rectangle(x, y, xpos, ypos);
			xpos++;
		}
		write(1, "\n", 1);
		ypos++;
	}
}
