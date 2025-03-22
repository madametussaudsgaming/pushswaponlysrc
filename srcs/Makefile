# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/21 18:28:11 by rpadasia          #+#    #+#              #
#    Updated: 2025/03/22 13:26:14 by rpadasia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

SRC = ft_alrsorted.c ft_atoi.c ft_best_rotation.c ft_error.c ft_freeing.c ft_isNOTvalid.c ft_lstindex_utils.c ft_lstminmax.c\
		ft_lstsize.c ft_node_placement.c ft_onlya.c ft_onlyb.c ft_onlyboth.c ft_putendl_fd.c ft_rotater_ra.c ft_rotater_rra.c\
		ft_simulations.c ft_simulations2.c ft_sort_main.c ft_split.c push_swap.c

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${NAME} ${OBJ}

re: fclean all

.PHONY: all clean fclean re
