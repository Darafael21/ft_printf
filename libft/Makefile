# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darafael <darafael@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 14:41:18 by darafael          #+#    #+#              #
#    Updated: 2025/04/24 15:12:28 by darafael         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c ft_strchr.c ft_strncmp.c ft_strdup.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_atoi.c ft_bzero.c ft_calloc.c ft_substr.c ft_split.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_tolower.c ft_toupper.c ft_itoa.c ft_striteri.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

BONUS_FLAG = .bonus_done

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(BONUS_FLAG)

$(BONUS_FLAG): $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)
	@touch $(BONUS_FLAG)

clean:
	rm -f $(OBJ) $(BONUS_OBJ) $(BONUS_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
