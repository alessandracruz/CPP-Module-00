# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastilh <acastilh@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 13:22:50 by acastilh          #+#    #+#              #
#    Updated: 2024/04/28 17:52:47 by acastilh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -Iincludes
RM = rm -rf

SRCS_DIR = src

SRCS = $(wildcard $(SRCS_DIR)/*.cpp)

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean, all, re