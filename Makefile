# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 15:45:18 by crmunoz-          #+#    #+#              #
#    Updated: 2024/07/25 12:10:07 by crmunoz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= push_swap
CC		:= clang
FLAGS	:= -Wall -Wextra -Werror -g
SRCS	:=  push_swap.c check_error.c move_push.c move_swap.c move_rotate.c move_reverse.c find_small.c \
			sort.c position.c target.c free.c\
			utils/ft_atol.c utils/ft_lstnew.c utils/ft_split.c utils/ft_substr.c utils/ft_lstlast.c \
			utils/ft_lstadd_front.c utils/ft_lstadd_back.c utils/ft_lstsize.c 
OBJS	:= $(SRCS:.c=.o)
.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

CLR_RMV		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM			:= rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:		fclean all
