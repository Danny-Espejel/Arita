# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -g

# Source files directory
SRC_DIR = ex00

# Object files directory
OBJ_DIR = obj

# Source files
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/rush03.c

# Object files
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Executable name
TARGET = rush03

# Default rule
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure the object files directory exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean up object files and the executable
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)

# Clean up object files directory and the executable
fclean: clean
	rm -rf $(OBJ_DIR)

# Recompile everything
re: fclean all

# Phony targets (not actual files)
.PHONY: all clean fclean re
