# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 18:06:33 by jfeuilla          #+#    #+#              #
#    Updated: 2021/11/03 14:49:13 by jfeuilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CXX			= clang++
CXX_FLAGS	= -Wall -Wextra -Werror
NAME 		= PhoneBook

SRC			= main.cpp\
			  dir.cpp\
			  contact.cpp\

OBJ			= $(SRC:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CXX) $(CXX_FLAGS) -o $(NAME) $(OBJ)

clean:
				$(RM) $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
