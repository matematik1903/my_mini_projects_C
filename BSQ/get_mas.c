/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 04:22:32 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/12 04:22:34 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

extern int g_number;
extern int g_gl;
int g_type;

int			atoi_mod(char *str)
{
	int		j;
	int		i;
	int		h;

	h = 0;
	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		h++;
		i++;
	}
	i = 0;
	while (str[i] != '\n' && str[i] != '\0' && h - i > 3)
	{
		if (str[i] < '0' || str[i] > '9')
			return (j);
		j = j * 10 + str[i] - '0';
		i++;
	}
	return (j);
}

int			ft_str_check(char *s1)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	g_number = atoi_mod(s1);
	if (g_number == 0)
		return (1);
	while (s1[i + 3] != '\0' && s1[i + 3] != '\n')
	{
		if (s1[i] >= '0' && s1[i] <= '9')
			j++;
		i++;
	}
	g_gl = j;
	if (i - j == 0)
		return (0);
	return (1);
}

void		usestr(char *str)
{
	int		i;
	int		**a;
	int		j;

	j = 0;
	i = 0;
	a = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			j++;
		i++;
	}
	if (atoi_mod(str) != j && g_type == 1)
		ft_putstr("map error");
	else if (ft_str_check(str) == 1)
		ft_putstr("map error");
	else
		element_a(str, a);
}

void		op_file(char const *argv[], int l)
{
	char	buf[1];
	char	*str;
	int		n;
	int		file;
	int		i;

	i = 0;
	file = open(argv[l], O_RDONLY);
	while ((n = read(file, buf, 1)) > 0)
		i++;
	close(file);
	str = (char *)malloc(sizeof(char) * (i + 1));
	file = open(argv[l], O_RDONLY);
	i = 0;
	while ((n = read(file, buf, 1)) > 0)
	{
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	usestr(str);
	close(file);
	free(str);
}
