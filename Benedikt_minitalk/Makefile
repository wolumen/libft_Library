# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 13:34:22 by brein             #+#    #+#              #
#    Updated: 2021/12/14 12:26:58 by brein            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: server client

server:
	cd printf && make all
	gcc $(CFLAGS) server.c printf/libftprintf.a printf/libft/libft.a -o server

client:
	cd printf && make all
	gcc $(CFLAGS) client.c printf/libftprintf.a printf/libft/libft.a -o client

NAME = $(all)

clean:
	cd printf && make clean
	rm -f server
	rm -f client

fclean: clean
	cd printf && make fclean

re: fclean all

.PHONY:
	all clean fclean re