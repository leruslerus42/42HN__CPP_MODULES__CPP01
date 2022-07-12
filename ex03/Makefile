# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 09:35:29 by rrajaobe          #+#    #+#              #
#    Updated: 2022/07/12 00:51:54 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SELF_WRN = -Wno-self-assign-field

NAME = 	unnecessary_violence

SRC = 	main.cpp \
		./classes/Weapon.cpp \
		./classes/HumanA.cpp  \
		./classes/HumanB.cpp   \
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(SELF_WRN) $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all