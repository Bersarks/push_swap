NAME		= push_swap

CC			= gcc -g #-g LLDB Debug mode on
CFLAGS		= -Wall -Wextra -Werror

SRC			= $(wildcard ./Src/*.c)
UTILS		= $(wildcard ./Utils/*.c)
LIST_FUNC	= $(wildcard ./Utils/list_func/*.c)

OBJ			= $(SRC:.c=.o) $(UTILS:.c=.o) $(LIST_FUNC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
