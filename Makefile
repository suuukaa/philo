# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 18:27:55 by sel-bouy          #+#    #+#              #
#    Updated: 2024/10/18 17:57:22 by sel-bouy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = cc -fsanitize=thread -g
CFLAGS =  -Wall -Wextra -Werror

SRC = main.c outils.c

all: $(NAME)

OBJ = $(SRC:.c=.o)

%.o: %.c philo.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
