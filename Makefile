# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpreissn <jpreissn@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 10:16:27 by jpreissn          #+#    #+#              #
#    Updated: 2021/11/22 10:16:27 by jpreissn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_strlen.c		\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c

SRCB	=	ft_lstnew.c			\
			ft_lstadd_front.c 	\
			ft_lstsize.c 		\
			ft_lstlast.c 		\
			ft_lstadd_back.c 	\
			ft_lstdelone.c 		\
			ft_lstclear.c 		\
			ft_lstiter.c 		\
			ft_lstmap.c

OBJ		=	$(SRC:%.c=$O%.o)

OBJB	=	$(SRCB:%.c=$O%.o)

S		=	src/
O		=	obj/

INC		=	inc/


CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g

.PHONY: all clean fclean re so bonus

all: $(NAME)

$(OBJ): $O%.o: $S%.c
	@mkdir -p $O
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJB): $O%.o: $S%.c
	@mkdir -p $O
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJB)
	ar rcs $(NAME) $(OBJ) $(OBJB)

clean:
	rm -f $(OBJ) $(OBJB)
	rm -rf $O

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJB)
