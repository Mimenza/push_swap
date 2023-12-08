# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 12:15:22 by emimenza          #+#    #+#              #
#    Updated: 2023/12/08 20:23:34 by emimenza         ###   ########.fr        #
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
NAME		=	push_swap

#Ficheros
SRC_FILES	=	00_main 01_init_stack 02_utils_stack 03_error 04_sort_stack 99_push 99_rotate 99_reverse_rotate 99_short3 99_swap
SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
LIBFT		=	libs/Libft
PRINTF		=	libs/ft_printf

#Librerias 
LIBS		= $(PRINTF)/libftprintf.a $(LIBFT)/libft.a 

# Header Files (dedicated and from libraries):
HEADERS		= $(PRINTF)/ft_printf.h $(LIBFT)/libft.h $(INC)/push_swap.h

#Directorios
SRC_DIR = srcs/
OBJ_DIR = objs/
OBJF = objs
INC = incs

# REGLAS # 
all:	printf libft $(NAME)

#Compilar 
$(NAME):$(OBJ)
		@$(CC) $(OBJ) $(LIBS) -o $(NAME)
		@echo "$(GREEN)PUSH SWAP HAS BEEN COMPILED!$(NC)"

# Compilar objetos individualmente y crear carpeta objs
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $<$(NC)"
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADER)
	@echo "$(YELLOW)Compiled!$(NC)"


# $@ : The file name of the target of the rule. If the target is an archive member, then ‘$@’ is the name of the archive file.
# $< : The name of the first prerequisite.

#compilar librerias individuales
libft:
	@echo "$(YELLOW)COMPILING LIBFT...$(NC)"
	@$(MAKE) -C ./$(LIBFT)
	@echo "$(GREEN)LIBFT HAS BEEN COMPILED$(NC)"

printf:
	@echo "$(YELLOW)COMPILING FT_PRINTF...$(NC)"
	@$(MAKE) -C ./$(PRINTF)
	@echo "$(GREEN)FT_PRINTF HAS BEEN COMPILED$(NC)"

# Eliminar tmp ft_printf
fclean_printf:
	@make fclean -C ./$(PRINTF)
	@echo "$(RED)PRINTF FULL CLEANED!$(NC)"

# Eliminar tmp libft
fclean_libft:
	@make fclean -C ./$(LIBFT)
	@echo "$(RED)LIBFT FULL CLEANED!$(NC)"


# Eliminar temporales
clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(RED)OBJS AND DIRECTORY CLEANED!$(NC)"

# Eliminar temporales y ejecutable fclean_mlx
fclean: clean  fclean_libft fclean_printf
	@$(RM) $(NAME)
	@echo "$(RED)EXECUTABLE CLEANED!$(NC)"

re: fclean all