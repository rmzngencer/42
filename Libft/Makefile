# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 10:09:38 by rgencer           #+#    #+#              #
#    Updated: 2024/10/20 14:21:02 by rgencer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
        ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strmapi.c\
       	ft_strchr.c ft_strdup.c ft_substr.c	ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c\
        ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_striteri.c\
        ft_tolower.c ft_toupper.c test.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		
BONES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
		ft_lstmap.c ft_lstiter.c

OBJS = $(SRCS:.c=.o)
OBJS += $(BONES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONES)
	ar rc $(NAME) $(OBJS) $(BONES)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(OBJS)
	$(CC) $(CFLAGS) -o test test.c $(NAME)
	./test





# **************************************************************************** #