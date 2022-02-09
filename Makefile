SRC =	atoi.c \
		instructions.c push_swap.c \
		utils.c 

OBJ =	atoi.o \
		instructions.o push_swap.o \
		utils.o 

CC = gcc -c

NAME = push_swap.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(SRC)
	ar rc $(NAME) $(OBJ)
	gcc push_swap.a -o push_swap

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all