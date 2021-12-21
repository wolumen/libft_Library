# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brein <brein@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 15:55:54 by brein             #+#    #+#              #
#    Updated: 2021/06/15 16:25:06 by brein            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isdigit.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_memccpy.c	\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_strncmp.c	\
		ft_strlen.c		\
		ft_strdup.c		\
		ft_strlcpy.c	\
		ft_substr.c		\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_tolower.c	\
		ft_toupper.c	\
		ft_memset.c		\
		ft_memmove.c	\
		ft_memcpy.c		\
		ft_memcmp.c		\
		ft_memchr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_strmapi.c

OBJS =	$(SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

BONUS_SRC = ft_lstnew.c				\
			ft_isspace_bonus.c		\
			ft_lstadd_front.c		\
			ft_lstsize.c			\
			ft_lstlast.c			\
			ft_lstadd_back.c		\
			ft_lstclear.c			\
			ft_lstdelone.c			\
			ft_lstiter.c			\

bonus: all ${BONUS_OBJS}
	ar rcsv ${NAME} ${BONUS_OBJS}

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) -I $(NAME) $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus