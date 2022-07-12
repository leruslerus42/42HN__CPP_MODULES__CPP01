# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 07:14:06 by rrajaobe          #+#    #+#              #
#    Updated: 2022/07/12 12:33:13 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SELF_WRN = -Wno-self-assign-field

NAME = 	zombie_horde

SRC = 	main.cpp \
		./classes/Zombie.cpp \
		./classes/zombieHorde.cpp \
	
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