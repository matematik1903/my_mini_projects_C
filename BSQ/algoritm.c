/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 04:22:16 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/12 04:22:20 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int g_number;
static int g_x1;
static int g_y1;

void	fill_up(int *a[], int y, int max, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < max)
	{
		while (j < max)
		{
			a[g_x1 - i][g_y1 - j] = -1;
			j++;
		}
		j = 0;
		i++;
	}
	out_retalgo(a, y, str);
}

int		min(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b < c)
			return (b);
		else
			return (c);
	}
}

void	algo(int *a[], int y, char *str)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < g_number)
	{
		while (j < y)
		{
			if (a[i][j] != 0)
				a[i][j] = min(a[i - 1][j], a[i - 1][j - 1], a[i][j - 1]) + 1;
			j++;
		}
		j = 1;
		i++;
	}
	finder(a, y, str);
}

void	finder(int *a[], int y, char *str)
{
	int i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (i[0] < g_number)
	{
		while (i[1] < y)
		{
			if (a[i[0]][i[1]] > i[2])
			{
				g_x1 = i[0];
				g_y1 = i[1];
				i[2] = a[i[0]][i[1]];
			}
			i[1]++;
		}
		i[1] = 0;
		i[0]++;
	}
	if (i[2] != 0)
		fill_up(a, y, i[2], str);
	else
		fill_up(a, y, 0, str);
}
