NAME	=	ft_select

SRC	= 	main.c \

OBJ	=	$(SRC:.o=.c)

CC	=	gcc -Wall -Wextra -Werror

HPATH	=	-I libft/includes

$(NAME):	$(LIB) $(OBJ)
		$(CC) -o $(NAME) $(OBJ) -L libft/ -lft

clean:
		rm $(OBJ)
		make -C libft/ fclean

all:		$(NAME)

fclean:		clean
		rm $(NAME)

.c.o:		
		$(CC) $(HPATH) -c $(SRC)
