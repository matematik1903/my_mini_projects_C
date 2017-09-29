#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brozhko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/13 15:28:55 by brozhko           #+#    #+#              #
#    Updated: 2017/09/13 15:28:57 by brozhko          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
NAME = bsq
CFLAGS = -Wall -Werror -Wextra
SOURCES = main.c m_reserv.c get_mas.c algoritm.c out.c

all:
	@$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)
clean:
	@rm -rf *.o
fclean: clean
	@rm -rf $(NAME)
