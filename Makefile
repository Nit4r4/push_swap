# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 15:00:27 by vferraro          #+#    #+#              #
#    Updated: 2022/05/31 13:56:34 by vferraro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PURP = \e[35m
GREEN = \e[32m
RED = \e[31m
WHITE = \e[39m
YELLOW = \e[33m
HIDDEN = \e[8m
RESET = \e[0m
#push_swap
SRCS = src/push_swap.c \
src/errors.c \
src/push.c \
src/reverse.c \
src/rotate.c \
src/sort_index.c \
src/swap.c \
src/malloc.c \
src/algo_min.c \
src/algo_med.c \
src/algo_max.c \
src/init_variable.c \
src/check_errors.c \
utils/atol.c 
CFLAGS = -Wall -Werror -Wextra -Imlx -g #-fsanitize=address
LIB = utils/libft/libft.a utils/ft_printf/libftprintf.a
CC = gcc
NAME = push_swap
OBJS = ${SRCS:.c=.o}
LBFT_PATH = ./utils/libft/
PRINTF_PATH = ./utils/ft_printf/
AR = ar rc
RM = rm -f

all: 		${NAME}

@ar -rcs	$(NAME):	$(OBJS)
			@$(MAKE) -C $(LBFT_PATH)
			@$(MAKE) -C $(PRINTF_PATH)
			@$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(LIB)
			@printf "$(GREEN)🍵 Creating $(NAME)$(RESET)\n"
			@sleep 0.5

%o:%.c
			$@(CC) $@(CFLAGS) -I ${LBFT_PATH} -I ${PRINTF_PATH} -c $< -o $@

clean: 
			${RM} ${OBJS}
			@$(MAKE) -C $(LBFT_PATH) clean
			@$(MAKE) -C $(PRINTF_PATH) clean
			@printf "$(YELLOW)🧽 Clean $(NAME)$(RESET)\n"
			@sleep 0.5

fclean: clean
			${RM} ${NAME}
			@$(MAKE) -C $(LBFT_PATH) fclean
			@printf "\r$(PURP)🗑  Remove $(NAME)$(RESET)\n"
			@sleep 0.5

re: fclean all

.PHONY: all clean fclean re