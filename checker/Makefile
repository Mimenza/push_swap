# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 12:49:22 by emimenza          #+#    #+#              #
#    Updated: 2023/12/14 16:47:11 by emimenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2 -g
PUSH_SWAP_ARCHIVE = ../push_swap/libpush_swap.a
GET_NEXT_LINE = libs/get_next_line/get_next_line.a

SRCS = srcs/main.c
OBJS = $(SRCS:.c=.o)

%.o : %.c 
	$(CC) -c $(CFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(PUSH_SWAP_ARCHIVE) $(GET_NEXT_LINE) $(OBJS) 
	$(CC) $^ -o $(NAME)
	cp $(NAME) ../push_swap 

$(PUSH_SWAP_ARCHIVE) :
	cd ../push_swap && make

$(GET_NEXT_LINE) :
	cd libs/get_next_line && make get_next_line 

clean :
	rm -f $(OBJS)

fclean : clean 
	rm -f $(NAME)
	cd ../push_swap && rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re