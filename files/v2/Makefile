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

NAME        := push_swap

SRC_DIR     := srcs
SRCS := \
			errors.c \
			lists_add_nodes.c \
			lists_remove_nodes.c \
			lists_utils.c \
			main.c \
			moves_push.c \
			moves_reverse_rotate.c \
			moves_rotate.c \
			moves_swap.c \
			sort_large.c \
			sort_little.c \
			sort_medium.c \
			utils.c \

SRCS := ${SRCS:%=${SRC_DIR}/%}

OBJ_DIR     := .objs
OBJS := ${SRCS:${SRC_DIR}/%.c=${OBJ_DIR}/%.o}

CC          := clang
CFLAGS      := -Wall -Wextra -Werror -g

RM          := rm -f
MAKEFLAGS   += --no-print-directory
DIR_DUP     = mkdir -p ${@D}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}
	${info EXECUTABLE CREATED: ${NAME}}


${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	${DIR_DUP}
	${CC} ${CFLAGS} -c -o $@ $<
	${info OBJECT CREATED: $@}

clean:
	${RM} ${OBJS}
	${info REMOVED OBJECTS: ${OBJS}}

fclean: clean
	${RM} ${NAME}
	${info REMOVED EXECUTABLES: ${NAME}}

re:
	${MAKE} fclean
	${MAKE} all

.PHONY: clean fclean re
.SILENT: ${OBJS} ${OBJS_CLIENT} ${NAME} ${NAME_CLIENT} clean fclean re