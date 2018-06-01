# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 09:14:59 by zsigabi           #+#    #+#              #
#    Updated: 2018/05/24 13:48:47 by zsigabi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

HEADER = libft.h

SOURCE = *.c

OBJECTS = $(SOURCE:.c=.o)

LFLAGS = ar rc

all: $(NAME)
	$(CC) $(CFLAGS) $(SOURCE) $(HEADER)
	$(LFLAGS) $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f $(NAME)

re: fclean all
