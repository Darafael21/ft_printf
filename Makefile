# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 14:41:18 by darafael          #+#    #+#              #
#    Updated: 2025/05/14 17:56:55 by darafael         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c printf_char.c printf_str.c printf_hex.c printf_num.c printf_pointers.c printf_unsint.c forconversion.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

LIB_PATH = ./libft
LIBFT = $(LIB_PATH)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIB_PATH) all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIB_PATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIB_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
