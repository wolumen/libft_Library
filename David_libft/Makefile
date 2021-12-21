# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 10:51:09 by dborgard          #+#    #+#              #
#    Updated: 2021/11/19 10:36:06 by dborgard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		=	libft.a

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c \
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_bzero.c ft_strlcat.c ft_strnstr.c ft_strlcpy.c ft_atoi.c ft_calloc.c ft_strdup.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS		=	$(SRCS:.c=.o)

BONUS_SRCS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
				ft_lstiter.c ft_lstmap.c

BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

CC			=	gcc
CC_FLAGS	=	-Wall -Werror -Wextra -I.

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -crs $(NAME) $(OBJS)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar -crs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
				rm -f $(OBJS) $(BONUS_OBJS)

fclean:
				rm -f $(NAME)

re:				fclean all

so:
	$(CC) -nostartfiles -fPIC $(CC_FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)