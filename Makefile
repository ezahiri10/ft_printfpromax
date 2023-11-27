NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_puthexlower.c \
		ft_puthexupper.c \
		ft_putptr.c \

OBJS = $(SRCS:.c=.o)

AR = ar rc

RM = rm -f

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< 


$(NAME): $(OBJS) ft_printf.h
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
