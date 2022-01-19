#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

NAME_FT = ft_container
NAME_STD = std_container

CC = clang++
FT = 0
CFLAGS = -Wall -Wextra -Werror "-D=FT $(FT)" -g -std=c++98

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

MAIN = main
TESTS_SUBJECT = subject_tests
TESTS_VECTOR = member_functions \
			   member_types \
			   iterator \
			   const_iterator

SRC = $(addsuffix .cpp, $(addprefix sources/, $(MAIN))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/vector/, $(TESTS_VECTOR)))

SBJ = $(addsuffix .cpp, $(addprefix sources/, $(MAIN))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/subject/, $(TESTS_SUBJECT)))

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

OBJ = $(SRC:cpp=std.o)
OBJ2 = $(SRC:cpp=ft.o)

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

all: message $(OBJ) $(OBJ2) $(NAME_STD) $(NAME_FT)

c: clear fclean message $(OBJ) $(OBJ2) $(NAME_STD) $(NAME_FT) clean

$(NAME_STD):
	@echo "\n\033[0;32mCompiling ${NAME_STD}..."
	@$(CC) $(CFLAGS) -o $(NAME_STD) $(OBJ)

$(NAME_FT):
	@echo "\033[0;32mCompiling ${NAME_FT}..."
	@$(CC) $(CFLAGS) -o $(NAME_FT) $(OBJ2)
	@echo "\n\033[0mDone !\n"

%.std.o: %.cpp
	@printf "\033[0;33mGenerating ${NAME_STD} objects... %s\n" $@
	@$(eval FT=0)
	@${CC} ${CFLAGS} -c $< -o $@

%.ft.o: %.cpp
	@printf "\033[0;33mGenerating ${NAME_FT} objects... %s\n" $@
	@$(eval FT=1)
	@${CC} ${CFLAGS} -c $< -o $@

clean: message
	@echo "\nRemoving binaries..."
	@rm -f $(OBJ)
	@rm -f $(OBJ2)
	@echo "\033[0m"

fclean: message
	@echo "\nDeleting objects..."
	@rm -f $(OBJ)
	@rm -f $(OBJ2)
	@echo "Deleting executables..."
	@rm -f $(NAME_STD)
	@rm -f $(NAME_FT)
	@echo "\033[0m"

re: clear fclean all

clear:
	@clear

message:
	@printf "\n"
	@printf "\033[1;36m	!! Makefile by tisantos @42Lisboa !! \e[0m \n"
	@printf "\033[1;35m		!! Makefile by tisantos @42Lisboa !! \e[0m \n"
	@printf "\033[1;31m			!! Makefile by tisantos @42Lisboa !! \e[0m \n"
	@printf "\033[1;38m				!! Makefile by tisantos @42Lisboa !! \e[0m \n"
	@printf "\n"

std: clear fclean message $(OBJ) $(NAME_STD) clean

ft: clear fclean message $(OBJ2) $(NAME_FT) clean

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####
