# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 17:48:07 by smuravyev         #+#    #+#              #
#    Updated: 2024/07/04 15:45:48 by smuravyev        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			PhoneBook

CC = 			c++

CFLAGS = 		-Wall -Wextra -Werror -std=c++98

SRC_FILES = 	PhoneBook main Contact
SRCS =			$(SRC_FILES:%=%.cpp)
OBJDIR = 		.objects
OBJS = 			$(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER = 		PhoneBook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@printf "\033[32m$(NAME) compiled successfully!\033[0m\n"
	
$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)
	@printf "\033[31m$(NAME) object files removed!\033[0m\n"

fclean:
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)
	@printf "\033[31m$(NAME) removed!\033[0m\n"

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
