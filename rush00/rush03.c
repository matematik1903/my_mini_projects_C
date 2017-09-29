/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 11:51:52 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/27 11:51:56 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		out_one(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
	{
		ft_putchar('A');
		return (0);
	}
	if (i == 1 && j == y)
	{
		ft_putchar('C');
		return (0);
	}
	if (i == x && j == 1)
	{
		ft_putchar('A');
		return (0);
	}
	if (i == x && j == y)
	{
		ft_putchar('C');
		return (0);
	}
	ft_putchar('B');
	return (0);
}

int		function(int i, int j, int x, int y)
{
	if ((i == 1) || (i == x) || (j == 1) || (j == y))
	{
		out_one(i, j, x, y);
	}
	else
		ft_putchar(' ');
	return (0);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= x)
	{
		while (j <= y)
		{
			function(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
