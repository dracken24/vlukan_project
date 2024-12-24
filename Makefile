NAME = vulkan_engine

OBJS = srcs/main.cpp

# Compiler
CXX = g++

# Flags
# CXXFLAGS = -Wall -Wextra -Werror -std=c++17
CXXFLAGS = -std=c++17
CXXFLAGS += -I/usr/include/vulkan -L/usr/lib/x86_64-linux-gnu -lvulkan
CXXFLAGS += -I$(PWD)/libraries/extern
CXXFLAGS += -I/usr/include/GLFW
CXXFLAGS += -lglfw

# Directories
SRCS_DIR = srcs
OBJS_DIR = objs

# Files
SRCS = $(shell find $(SRCS_DIR) -type f -name '*.cpp')
OBJS = $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

all: $(NAME) launch

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@echo "$(CYAN)╔═════════════════════════════════════════════════╗$(RESET)"
	@echo "$(CYAN)║     Pre-compilation des OBJS...                 ║$(RESET)"
	@echo "$(CYAN)╚═════════════════════════════════════════════════╝$(RESET)"
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(BLUE)╔═════════════════════════════════════════════════╗$(RESET)"
	@echo "$(BLUE)║     Création de l'exécutable...                 ║$(RESET)"
	@echo "$(BLUE)╚═════════════════════════════════════════════════╝$(RESET)"
	$(CXX) $(OBJS) -o $(NAME) $(CXXFLAGS)
	@echo "\n"

re: fclean all

launch:
	@echo "$(GREEN)╔═════════════════════════════════════════════════╗$(RESET)"
	@echo "$(GREEN)║     Execution du programme...                   ║$(RESET)"
	@echo "$(GREEN)╚═════════════════════════════════════════════════╝$(RESET)"
	@./$(NAME)

clean:
	@echo "$(RED)╔═════════════════════════════════════════════════╗$(RESET)"
	@echo "$(RED)║     Nettoyage des fichiers...                   ║$(RESET)"
	@echo "$(RED)╚═════════════════════════════════════════════════╝$(RESET)"
	rm -f $(NAME)
	rm -rf $(OBJS_DIR)

fclean: clean
	@echo "$(RED)╔═════════════════════════════════════════════════╗$(RESET)"
	@echo "$(RED)║     Nettoyage en profondeur des fichiers...     ║$(RESET)"
	@echo "$(RED)╚═════════════════════════════════════════════════╝$(RESET)"
	rm -f $(NAME)

# Colors

BLUE = \033[0;34m
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

.PHONY: all launch clean fclean re
