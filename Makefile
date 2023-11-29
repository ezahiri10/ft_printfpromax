
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_puthex.c \
	  ft_putptr.c

OBJ = $(SRC:.c=.o)

RM = rm -f

AR = ar -rc 

%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJ) ft_printf.h
		$(AR) $(NAME) $(OBJ)
			
all : $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
