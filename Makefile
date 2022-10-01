NAME		= push_swap

CC			= gcc -g #-g LLDB Debug mode on
CFLAGS		= -Wall -Wextra -Werror

SRC			= $(wildcard ./Src/*.c)
UTILS		= $(wildcard ./Utils/*.c)
LIST_FUNC	= $(wildcard ./Utils/list_func/*.c)

OBJ			= $(SRC:.c=.o) $(UTILS:.c=.o) $(LIST_FUNC:.c=.o)

Color_yellow = \033[33m
Color_red = \033[31m
Color_blue = \033[34m

all: yo $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

yo:
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢹⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⠁⠀⢸⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⠤⠤⠤⢤⣤⣠⠔⠁⠀⠀⢀⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⣴⣶⣶⣶⡖⠒⠒⠒⠒⠶⠦⠤⢤⣴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡄⣠⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠈⠛⠿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⣄⠙⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠦⣄⣀⠀⠀⠀⠀⣰⡋⣻⣦⠀⠀⠀⠀⠀⠀⢿⣦⣿⡇⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠁⠀⠀⠹⢿⣿⠟⠀⠀⠀⢶⣴⠀⠈⠉⠉⠀⠀⣿⣄⣰⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀$(Color_red)⡠⠤⢄⡀$(Color_yellow)⠀⣀⠀⠀⢀⣤⣀⣀⠤⠀$(Color_red)⠀⢸⠀⢹⡃$(Color_yellow)⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡼⠦⣄⣇⠀$(Color_red)⢸⠀⠀⠀⢱$(Color_yellow)⠀⠀⠑⢞⠉⠉⢻⠃⠀⠀$(Color_red)⠀⠈⢦⡾$(Color_yellow)⠀⠀⣸⠃⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣏⠀⠀⠈⠙⢦$(Color_red) ⠳⠤⠴⠋$(Color_yellow)⠀⠀⠀⠈⠓⠖⠃⠀⠀⠀⠀⣠⡞⠁⠀⢀⡏⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⠀⠙⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠖⠁⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⣾⠛⠒⠒⠶⠤⠤⠤⠤⠤⠤⠤$(Color_yellow)⠼⣆⠀⠀⠀⠀⠀⠙⠀⠀⠀⠀⠀⠒⠒⠒⠊⠀⠀⠀⠀⠀⠀⠀⣰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀$(Color_yellow)⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣤⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏$(Color_yellow)⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠎⢀⣶$(Color_yellow)⠀⡟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢸⣄⣀⣀⣤⠤⠒⢻⠀⠀⢐⡿⠞⢁⡏⣠$(Color_yellow)⡇⠀⣀⣄⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠈⠉⠀⠀⠀⠀⠀⢸⠀⠀⢀⣠⠀⣸⡟⢻$(Color_yellow)⡇⢠⡿⠟⠙⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⢸⣠⠴⠋⢹⠀⣨⡇⠛$(Color_yellow)⣇⠋⢧⠀⠀⢳⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⢸⡼⢻⣷⠞$(Color_yellow)⢻⣄⠘⡄⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠁⠀⠀$(Color_yellow)⠙⢦⣙⣄⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠓⠒⠒⠛⠉⠉⠑⢲⡤⠀⣄⡠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⣀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_red)██████╗ ██╗██╗  ██╗ █████╗  ██████╗██╗  ██╗██╗   ██╗"
	@echo "$(Color_red)██╔══██╗██║██║ ██╔╝██╔══██╗██╔════╝██║  ██║██║   ██║"
	@echo "$(Color_red)██████╔╝██║█████╔╝ ███████║██║     ███████║██║   ██║"
	@echo "$(Color_red)██╔═══╝ ██║██╔═██╗ ██╔══██║██║     ██╔══██║██║   ██║"
	@echo "$(Color_red)██║     ██║██║  ██╗██║  ██║╚██████╗██║  ██║╚██████╔╝"
	@echo "$(Color_red)╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝ ╚═════╝B̷u̷r̷a̷k̷ ̷Y̷I̷L̷D̷I̷R̷I̷M̷"

.PHONY: all clean fclean re
