
NAME = libftprintf.a

CC = cc

RED = \033[0;31m

GREEN = \033[0;32m

RESET = \033[0m

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_putptr.c

OBJ = $(SRC:.c=.o)

RM = rm -f

AR = ar -rc 

%.o : %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $<
	@echo "$(RED)loading...$(RESET)"

$(NAME) : $(OBJ) ft_printf.h
	@$(AR) $(NAME) $(OBJ)
	@echo "\033[0;32m$(NAME) created\033[0m"
			
all : $(NAME)

clean : 
	@$(RM) $(OBJ)
	@echo "\033[0;31m$(OBJ) deleted\033[0m"

fclean : clean
	@$(RM) $(NAME)
	@echo "\033[0;31m$(NAME) deleted\033[0m"

re : fclean all
