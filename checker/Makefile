# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 12:49:22 by emimenza          #+#    #+#              #
#    Updated: 2023/12/14 13:15:04 by emimenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definir colores
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m # No color (reiniciar)

#Comandos
DEL			=	rm -f
CC			=	gcc
CCFLAGS		=	-Wall -Wextra -Werror

# -g3 -fsanitize=address

#Nombre ejecutable
NAME		=	checker

#Ficheros
SRC_FILES	=	main
SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
GNL			=	libs/get_next_line
PUSH_SWAP	=	../push_swap

#Librerias 
LIBS		= $(GNL)/get_next_line.a

#Directorios
SRC_DIR = srcs/
OBJ_DIR = objs/
OBJF = objs
INC = incs

# REGLAS # 
all: push_swap gnl $(NAME)

# Compilar checker
$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(PUSH_SWAP)/push_swap $(LIBS) -o $(NAME)
	@echo "$(GREEN)CHECKER HAS BEEN COMPILED!$(NC)"

# Compilar objetos individualmente y crear carpeta objs
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $<$(NC)"
	@$(CC) $(CCFLAGS) -o $@ -c $< -I$(PUSH_SWAP) -I$(GNL) $(HEADER)
	@echo "$(YELLOW)Compiled!$(NC)"

# Compilar push_swap
push_swap:
	@$(MAKE) -C $(PUSH_SWAP)
	
gnl:
	@echo "$(YELLOW)COMPILING GNL...$(NC)"
	@$(MAKE) -C ./$(GNL)
	@echo "$(GREEN)GNL HAS BEEN COMPILED$(NC)"


# Eliminar tmp ft_printf
fclean_gnl:
	@make fclean -C ./$(GNL)
	@echo "$(RED)GNL FULL CLEANED!$(NC)"

# Eliminar temporales
clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(RED)OBJS AND DIRECTORY CLEANED!$(NC)"

# Eliminar temporales y ejecutable fclean_mlx
fclean: clean  fclean_gnl 
	@$(RM) $(NAME)
	@echo "$(RED)EXECUTABLE CLEANED!$(NC)"

re: fclean push_swap gnl $(NAME)