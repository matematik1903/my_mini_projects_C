/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 22:05:42 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/27 22:05:47 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		lengt(int n)
{
	int len;

	len = 1;
	if (n == 1)
	{
		return (7);
	}
	len = 2 * (n + 2) + (1 + n / 2) * 2 + lengt(n - 1);
	return (len);
}

void	function_one(int *g, int s)
{
	int m;
	int i;

	m = lengt(s);
	i = g[0] / 2 + g[3] / 2 - 1;
	while (g[1] < g[0])
	{
		if (s == g[10])
		{
			if (g[7] == (s - (s - g[5]) / 2) && s >= 5 && g[1] == i)
			{
				ft_putchar('$');
			}
			else if (g[1] > g[2] && g[1] < g[4] && g[7] >= g[5])
			{
				ft_putchar('|');
			}
			else
				ft_putchar('*');
		}
		else
			ft_putchar('*');
		g[1]++;
	}
}

int		pri_figur(int *g, int size)
{
	int m;

	if (size % 2 == 0)
		g[3] = size - 1;
	else
		g[3] = size;
	if (size % 2 == 0)
		g[5] = 3;
	else
		g[5] = 2;
	m = lengt(size);
	g[1] = 0;
	g[0] = g[6] - 2 * g[11] + 2;
	g[2] = g[0] / 2 - g[3] / 2 - 1;
	g[4] = g[0] / 2 + g[3] / 2 + 1;
	function_one(g, size);
	ft_putchar('\\');
	return (0);
}

void	function_too(int *g)
{
	while (g[8] != g[11] - 2)
	{
		ft_putchar(' ');
		g[8]++;
	}
	ft_putchar('/');
}

void	sastantua(int size)
{
	int g[12];

	g[6] = lengt(size);
	g[7] = 0;
	g[8] = 0;
	g[9] = 3;
	g[11] = lengt(size) / 2 + 1;
	while (g[11] >= 0)
	{
		function_too(g);
		g[10] = g[9] - 2;
		pri_figur(g, size);
		ft_putchar('\n');
		g[8] = 0;
		g[11] = g[11] - 1;
		g[7]++;
		if (g[7] == g[9])
		{
			g[11] = g[11] - 1 - (g[9] - 1) / 2;
			g[9]++;
			g[7] = 0;
		}
	}
}
