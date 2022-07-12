# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 07:14:06 by rrajaobe          #+#    #+#              #
#    Updated: 2022/07/11 10:41:54 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SELF_WRN = -Wno-self-assign-field

NAME = 	zombie

SRC = 	main.cpp \
		./classes/Zombie.cpp \
		./classes/newZombie.cpp \
		./classes/randomChupp.cpp \
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all