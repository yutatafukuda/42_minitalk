NAME_S = server

NAME_C = client

NAME = $(NAME_S) $(NAME_C)

LIBDIR = ./libft/

LIBFT = $(LIBDIR)libft.a

SRC_S = server.c
SRC_C = client.c

B_SRC_S = server_bonus.c
B_SRC_C = client_bonus.c

OBJ_S = $(SRC_S:.c=.o)
OBJ_C = $(SRC_C:.c=.o)

B_OBJ_S = $(B_SRC_S:.c=.o)
B_OBJ_C = $(B_SRC_C:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

ifdef FLAG
OBJ_S = $(B_OBJ_S)
OBJ_C = $(B_OBJ_C)
endif

all: $(NAME)

$(NAME_S): $(OBJ_S)
	$(MAKE) -C $(LIBDIR)
	$(CC) $(CFLAGS) $(OBJ_S) $(LIBFT) -o $(NAME_S)

$(NAME_C): $(OBJ_C)
	$(MAKE) -C $(LIBDIR)
	$(CC) $(CFLAGS) $(OBJ_C) $(LIBFT) -o $(NAME_C)

bonus:	
			@make FLAG=1

clean:
	$(MAKE) clean -C $(LIBDIR)
	rm -f $(OBJ_S) $(OBJ_C) $(B_OBJ_S) $(B_OBJ_C)

fclean: clean
	$(MAKE) fclean -C $(LIBDIR)
	rm -f $(LIBFT) $(NAME_S) $(NAME_C) $(B_OBJ_S) $(B_OBJ_C)

re: fclean all

.PHONY: all clean fclean re