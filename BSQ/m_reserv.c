/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_reserv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 05:57:03 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/12 05:57:05 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int g_z;
static int g_k;
static int g_h1;
static int g_h;
static int g_g;
static int g_i;
static int g_j;

int g_number;
int g_gl;

void	bambaleylp(int **a, char *str)
{
	if (g_h1 > 0)
	{
		ft_putstr("map error");
	}
	else
	{
		if (chek(a, g_k) >= 1)
			ft_putstr("map error");
		else
			algo(a, g_k, str);
	}
}

void	bamba(void)
{
	if (g_i == 0)
		g_h = g_k;
	if (g_h != g_k)
		g_h1++;
}

void	bambalio(char *str, int **a)
{
	while (str[g_j] != '\n' && g_j != -1)
	{
		if (str[g_j] == '\0')
			g_j = -2;
		else
			a[g_i][g_z] = ret(str, g_j);
		g_j++;
		g_z++;
	}
}

void	bamba_collection(char *str)
{
	if (str[g_j] != '\0')
	{
		g_k++;
		g_j++;
	}
	else
		g_g = 1;
}

void	element_a(char *str, int **a)
{
	g_g = 0;
	g_h1 = 0;
	g_j = g_gl + 3;
	g_i = 0;
	a = (int **)malloc(sizeof(int **) * g_number);
	while (g_i < g_number && g_j != -1)
	{
		g_z = 0;
		g_k = 0;
		g_j++;
		while (str[g_j] != '\n' && g_g != 1)
			bamba_collection(str);
		bamba();
		a[g_i] = (int *)malloc(sizeof(int*) * g_k);
		g_j = g_j - g_k;
		bambalio(str, a);
		g_i++;
	}
	bambaleylp(a, str);
}
