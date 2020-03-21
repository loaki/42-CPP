# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 18:06:33 by jfeuilla          #+#    #+#              #
#    Updated: 2020/03/10 14:51:23 by jfeuilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CXX			= clang++
CXX_FLAGS	= -Wall -Wextra -Werror
NAME 		= PhoneBook

SRC			= main.cpp\
			  dir.cpp\

OBJ			= $(SRC:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CXX) $(CXX_FLAGS) -o $(NAME) $(OBJ)

clean:
				$(RM) $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
