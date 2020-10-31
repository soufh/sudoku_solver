HEADER_DIR = includes
SOURCE_FILE = arg_parser.c main.c utils.c is_valid_entry.c
OBJ_FILE = ${SOURCE_FILE:.c=.o}
GAME_NAME = sudoku
GCFLAGS = -Wall -Wextra -Werror


%.o: %.c
	gcc ${GCFLAGS} -c $< -I ${HEADER_DIR}
${GAME_NAME}:  ${SOURCE_FILE}
	gcc ${GCFLAGS} -o $@ ${SOURCE_FILE} -I ${HEADER_DIR}
all: ${GAME_NAME}

clean:
	rm -f ${OBJ_FILE}
fclean: clean
	rm -f ${GAME_NAME}
re: fclean all
.PHONY: clean fclean re all
