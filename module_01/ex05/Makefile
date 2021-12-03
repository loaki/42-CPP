# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 18:06:33 by jfeuilla          #+#    #+#              #
#    Updated: 2021/11/17 16:37:13 by jfeuilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CXX			= clang++
CXX_FLAGS	= -Wall -Wextra -Werror
NAME 		= karen

SRC			= main.cpp\
			  Karen.cpp

OBJ			= $(SRC:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CXX) $(CXX_FLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp
				$(CXX) $(CXX_FLAGS) -o $@ -c $<

clean:
				$(RM) $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
