# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/13 01:52:41 by brein             #+#    #+#              #
#    Updated: 2021/08/26 17:28:42 by brein            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=		ft_printf.c			\
				ft_conversions.c	\
				ft_conversions_2.c	\

OBJ		=		$(SRC:.c=.o)

LIBDIR		=	./libft

LIBFTSRC	=	./libft/ft_strlen.c			\
				./libft/ft_itoa.c			\
				./libft/ft_strdup.c			\
				./libft/ft_bzero.c			\

LIBFTOBJ	=	$(LIBFTSRC:.c=.o)

HEADER		=	ft_printf.h

CC			=	gcc

CFLAGS		=	-g -Wall -Werror -Wextra

NAME		=	libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ) $(LIBFTOBJ)
			ranlib $(NAME)

$(OBJ):		$(SRC)
			$(CC) $(CFLAGS) $(SRC) $(HEADER) -c
			make all -C $(LIBDIR)

clean:
			rm -rf $(OBJ)
			make clean -C $(LIBDIR)
	
fclean:		clean
			rm -rf $(NAME) $(LIBDIR)/libft.a
			rm -rf libft.a
			rm -rf a.out
			rm -rf ft_printf.h.gch
	
re:			fclean all
