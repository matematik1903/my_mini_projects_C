/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 04:25:46 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/12 04:25:48 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int g_number;
int g_gl;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ret(char *str, int j)
{
	if (str[j] == str[g_gl])
		return (1);
	else if (str[j] == str[g_gl + 1])
		return (0);
	else
		return (-1);
}

void	ft_fr_mas(int *a[])
{
	int i;

	i = 0;
	while (i < g_number)
	{
		free(a[i]);
		i++;
	}
	free(a);
}

void	out_retalgo(int **a, int y, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_number)
	{
		while (j < y)
		{
			if (a[i][j] < 0)
				ft_putchar(str[g_gl + 2]);
			if (a[i][j] == 0)
				ft_putchar(str[g_gl + 1]);
			if (a[i][j] > 0)
				ft_putchar(str[g_gl]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	ft_fr_mas(a);
}
