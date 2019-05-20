NAME = 
LBNAME = libft.a
COPS = -Wall -Werror -Wextra
LBOPS = -c -Wall -Werror -Wextra
SRCS = *.c
OBJS = *.o

all:
	gcc $(LBOPS) $(SRCS)
	ar rc $(LBNAME) $(OBJS)

clean:
	rm -f *.o
	rm -f test

fclean: clean
	rm -f $(LBNAME)

re:	fclean all
