/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 04:22:42 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/12 04:22:48 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

extern int g_type;
int g_number;
int g_gl;

int			chek(int **a, int y)
{
	int		j;
	int		k;
	int		i;

	j = 0;
	k = 0;
	i = 0;
	while (i < g_number)
	{
		while (j < y)
		{
			if (a[i][j] != 0 && a[i][j] != 1)
				k++;
			j++;
		}
		j = 0;
		i++;
	}
	if (k > 0)
		return (1);
	return (0);
}

int			creative(void)
{
	int		i;
	char	buf[1];
	char	*str;
	int		n;

	str = (char *)malloc(sizeof(char) * BAMBINO);
	if (str == NULL)
		return (0);
	i = 0;
	while ((n = read(0, buf, 1)) > 0)
	{
		if (i == BAMBINO)
			return (0);
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	usestr(str);
	free(str);
	return (0);
}

int			main(int argc, char const *argv[])
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		g_type = 1;
		while (i < argc)
		{
			op_file(argv, i);
			if (argc > 2 && i != argc - 1)
				ft_putchar('\n');
			i++;
		}
	}
	else
	{
		g_type = 0;
		creative();
	}
	return (0);
}
