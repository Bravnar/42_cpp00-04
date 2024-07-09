# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 10:05:42 by smuravyev         #+#    #+#              #
#    Updated: 2024/05/29 10:33:48 by smuravyev        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = 			c++

CFLAGS = 		-Wall -Wextra -Werror -std=c++98

SRC = 			megaphone

CPPFILES = 		$(SRC:%=%.cpp)

NAME = 			megaphone

# **************************************************************************** #

all:	$(NAME)

$(NAME):	$(CPPFILES)
	$(CC) $(CFLAGS) -o $(NAME) $(CPPFILES)

clean:
	rm -f $(NAME)

.PHONY: all clean
