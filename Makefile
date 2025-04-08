# **************************************************************************** #
#                                  Makefile                                    #
# **************************************************************************** #

NAME        := test_runner
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98
SRC         := main.cpp test_framework/TestFramework.cpp
OBJ         := $(SRC:.cpp=.o)

# ----------------------------------------------------------------------------- #
#                                Compilation Rules                              #
# ----------------------------------------------------------------------------- #

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ----------------------------------------------------------------------------- #
#                                  Utilities                                    #
# ----------------------------------------------------------------------------- #

run: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run
