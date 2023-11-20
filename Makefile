# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 13:13:28 by agerbaud          #+#    #+#              #
#    Updated: 2023/11/20 17:03:13 by agerbaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = ft_printf.h
LIB_D = libft/
LIB_I = libft.a
LIB_A = $(LIB_D)$(LIB_I)

SRC =	ft_printf.c

CC = cc -Wall -Wextra -Werror -MMDt 210 h
AR = ar -crs
OBJS = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

all : $(NAME)


$(NAME): $(LIB_A) $(OBJS)
	cp $(LIB_A) $@
	$(AR) $@ $<

-include $(DEP)

$(LIB_A): $(LIB_D)
	$(MAKE) -C $(LIB_D)

%.o: %.c
	$(CC) -include $(INCLUDE) -c $<

clean:
	$(RM) $(OBJS) $(DEP)
	$(MAKE) clean -C $(LIB_D)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIB_A)

re: fclean all

.PHONY: all clean fclean re
