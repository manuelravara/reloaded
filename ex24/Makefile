# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mravara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/22 13:31:53 by mravara           #+#    #+#              #
#    Updated: 2026/10/22 13:31:55 by mravara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SOURCES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c \

OBJECTS = $(SOURCES:.c=.o)

.c.o: $(SOURCES)
		$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

all: $(NAME)

clean:
		$(RM) $(OBJECTS) $(B_OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean 
		$(MAKE) all
		
.PHONY: all clean fclean re