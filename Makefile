CC = cc
CFLAGS = -Wall -Werror -Wextra $(DEBUG_FLAGS) -Ilibft
DEBUG_FLAGS = -g
NAME = push_swap
SRC = main.c\
	  array.c\
	  first.c\
	  small_swap.c\
	  stack1.c\
	  stack2.c\
	  print.c\

OBJ = $(patsubst %.c,%.o,$(SRC))
DEP = $(patsubst %.c,%.d,$(SRC))
LFLAGS =

all: $(NAME)

debug: fclean debug_cflags $(NAME)

debug_cflags:
	@$(eval DEBUG_FLAGS = -g)

$(NAME): libft $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ -Llibft -lft $(LFLAGS)


libft:
	@$(MAKE) -C libft
	@echo "Made libft"

-include $(DEP)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)
	make -C libft fclean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
