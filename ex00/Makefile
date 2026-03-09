CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra
NAME		:= easyfine
FILES		:= main.cpp
OBJ			:= $(FILES:.cpp=.o)
HEADER		:=  easyfind.hpp


all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
 
re: fclean all

.PHONY: all re clean fclean