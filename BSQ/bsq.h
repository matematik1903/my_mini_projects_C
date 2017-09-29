/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 04:22:25 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/12 04:22:27 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define BAMBINO 5000000
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void	out_retalgo(int **a, int y, char *str);
void	ft_putchar(char c);
void	ft_putstr(char *c);
int		ft_str_check(char *s1);
int		ret(char *str, int j);
int		chek(int **a, int y);
void	element_a(char *str, int **a);
void	usestr(char *str);
void	fill_up(int *a[], int y, int max, char *str);
void	finder(int *a[], int y, char *str);
int		min(int a, int b, int c);
void	algo(int *a[], int y, char *str);
void	op_file(char const *argv[], int l);
void	bambaleylp(int **a, char *str);
void	bamba(void);
void	bambalio(char *str, int **a);
void	bamba_collection(char *str);
int		creative(void);
void	ft_fr_mas(int *a[]);

#endif
