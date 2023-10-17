# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvillalt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:59:52 by nvillalt          #+#    #+#              #
#    Updated: 2023/10/06 14:14:46 by nvillalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

SRCS = ft_atoi.c \
	   ft_isascii.c \
	   ft_memset.c \
	   ft_strncmp.c \
	   ft_toupper.c \
	   ft_bzero.c \
	   ft_isdigit.c \
	   ft_strchr.c \
	   ft_strnstr.c \
	   ft_isalnum.c \
	   ft_isprint.c \
	   ft_strlcpy.c \
	   ft_strrchr.c \
	   ft_isalpha.c \
	   ft_memcpy.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlcat.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_memmove.c \
	   ft_itoa.c \
	   ft_strtrim.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_split.c

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS = $(SRCS:%.c=%.o)

OBJS_BONUS = $(BONUS:%.c=%.o)

RM = rm -f

.PHONY: clean fclean re all bonus

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS_BONUS) $(NAME)
	$(AR) $(NAME) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:
	$(RM) $(NAME) $(OBJS) $(OBJS_BONUS)

re: fclean all
