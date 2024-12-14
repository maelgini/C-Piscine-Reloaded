NAME = ft_display_file

SRC = ft_display_file.c

OFILES = ft_display_file.o

all : $(NAME)


$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(OFILES)

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all