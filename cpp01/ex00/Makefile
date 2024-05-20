# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 13:22:50 by acastilh          #+#    #+#              #
#    Updated: 2024/05/20 16:34:29 by acastilh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
BLACK				=	\033[0;30m
BLUE				=	\033[0;34m
CYAN				=	\033[0;36m
GREEN				=	\033[0;32m
MAGENTA				=	\033[1;35m
ORANGE				=	\033[1;38;5;214m
RED					=	\033[0;31m
RESET				=	\033[0m
WHITE				=	\033[0;37m
YELLOW				=	\033[0;33m

NAME = zombie

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -Iincludes
RM = rm -rf

SRCS_DIR = src

SRCS = $(wildcard $(SRCS_DIR)/*.cpp)

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo "$(ORANGE) Compiling  ➟  $(BLUE) $(SRCS) $(WHITE)"

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(CYAN) $(NAME) - Bath is so good!  Now it's over. 🧼✨$(RESET)"

re: fclean all

.PHONY: fclean, all, re