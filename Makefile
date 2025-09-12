# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 12:34:17 by agerbaud          #+#    #+#              #
#    Updated: 2025/09/12 10:23:48 by agerbaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS =	srcs/ft_putchar_fd.c			\
		srcs/ft_puthexa.c				\
		srcs/ft_putnbr_fd.c				\
		srcs/ft_putnbr_unsigned_fd.c	\
		srcs/ft_putpointer.c			\
		srcs/ft_putstr_fd.c				\
		srcs/ft_strlen.c				\
		srcs/ft_printf.c


CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD
RF = -rf

BUILD_DIR = .build

OBJECTS = $(SRCS:%.c=$(BUILD_DIR)/%.o)
DEPENDANCIES = $(SRCS:%.c=$(BUILD_DIR)/%.d)


all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -crs $@ $^

-include $(DEPENDANCIES)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(RF) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
