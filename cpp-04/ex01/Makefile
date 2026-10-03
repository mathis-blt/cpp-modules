################################################################################
###									PROGRAM									 ###
################################################################################

NAME					=		CapableAnimals

CXX						=		c++

CFLAGS					=		-std=c++98 -Wall -Wextra -Werror -MMD -MP

################################################################################
###									DIRECTORY								 ###
################################################################################

OBJ_DIR					=		obj

################################################################################
###									FILES									 ###
################################################################################

HEADERS					=		Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp\
								WrongCat.hpp Brain.hpp

SRC						=		main.cpp Animal.cpp Cat.cpp Dog.cpp\
								WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ						=		$(SRC:%.cpp=$(OBJ_DIR)/%.o)
DEP						=		$(OBJ:%.o=%.d)

################################################################################
###									ARCHIVES								 ###
################################################################################

all: $(NAME)

$(NAME): $(OBJ) Makefile
			$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
			$(CXX) $(CFLAGS) -o $@ -c $<

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

-include $(DEP)

re: fclean
			$(MAKE) all

fclean: clean
			rm -f $(NAME)

clean: 
			rm -rf $(OBJ_DIR)

.PHONY: all clean fclean re