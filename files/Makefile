# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 14:54:39 by acrespy           #+#    #+#              #
#    Updated: 2023/01/16 15:01:53 by acrespy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c main.c \

NAME = push_swap

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

RM	= rm -rf

all:	${NAME}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
	${RM} ${NAME}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all bonus clean fclean re
