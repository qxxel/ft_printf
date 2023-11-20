# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 12:34:17 by agerbaud          #+#    #+#              #
#    Updated: 2023/11/20 15:54:13 by agerbaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = libft.h
SRCS =	ft_isalpha.c			\
		ft_isdigit.c			\
		ft_isalnum.c			\
		ft_isascii.c			\
		ft_isprint.c			\
		ft_strlen.c				\
		ft_memset.c				\
		ft_bzero.c				\
		ft_memcpy.c				\
		ft_memmove.c			\
		ft_strlcpy.c			\
		ft_strlcat.c			\
		ft_toupper.c			\
		ft_tolower.c			\
		ft_strchr.c				\
		ft_strrchr.c			\
		ft_strncmp.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_strnstr.c			\
		ft_atoi.c				\
		ft_calloc.c				\
		ft_strdup.c				\
		ft_substr.c				\
		ft_strjoin.c			\
		ft_strtrim.c			\
		ft_split.c				\
		ft_itoa.c				\
		ft_strmapi.c			\
		ft_striteri.c			\
		ft_putchar_fd.c			\
		ft_putstr_fd.c			\
		ft_putendl_fd.c			\
		ft_putnbr_fd.c			\
		ft_putnbr_unsigned_fd.c	\
		ft_putpointer.c			\
		ft_puthexa.c

SRCS_BONUS =	ft_lstnew_bonus.c		\
				ft_lstadd_front_bonus.c	\
				ft_lstsize_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c

CC = cc -Wall -Wextra -Werror -MMD

OBJECTS = $(SRCS:.c=.o)
OBJECTS_BONUS = $(SRCS_BONUS:.c=.o)
DEPENDANCIES = $(SRCS:.c=.d) $(SRCS_BONUS:.c=.d)


all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -crs $@ $^

-include $(DEPENDANCIES)

%.o: %.c
	$(CC) -include $(INCLUDE) -c $<

bonus:
	@$(MAKE) SRCS="$(SRCS) $(SRCS_BONUS)"

clean:
	$(RM) $(OBJECTS) $(OBJECTS_BONUS) $(DEPENDANCIES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
