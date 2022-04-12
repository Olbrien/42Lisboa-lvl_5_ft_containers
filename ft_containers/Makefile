#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

NAME_FT = ft_container
NAME_STD = std_container

INC_DIR     = /includes
FLAGS_INC   = -I $(INC_DIR)

CC = clang++
FT = 0
CFLAGS = -Wall -Wextra -Werror "-D=FT $(FT)" -g -std=c++98
FFLAGS = -Wall -Wextra -Werror -fsanitize=address "-D=FT $(FT)" -g -std=c++98

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

MAIN = main
EVALUATION_MAIN = evaluation_main

TESTS_VECTOR = member_functions \
			   member_types \
			   iterator \
			   const_iterator \
			   reverse_iterator \
			   const_reverse_iterator
TESTS_MAP = member_functions \
			   member_types \
			   iterator \
			   const_iterator \
			   reverse_iterator \
			   const_reverse_iterator
TESTS_STACK = member_functions \
			   member_types
TESTS_EXTRAS = extras
TESTS_ANYTHING = anything

SRC = $(addsuffix .cpp, $(addprefix sources/, $(MAIN))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/vector/, $(TESTS_VECTOR))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/map/, $(TESTS_MAP))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/stack/, $(TESTS_STACK))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/extras/, $(TESTS_EXTRAS))) \
	  $(addsuffix .cpp, $(addprefix sources/tests/anything/, $(TESTS_ANYTHING)))

SBJ = $(addsuffix .cpp, $(addprefix sources/tests/subject/, $(EVALUATION_MAIN)))

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

OBJ = $(SRC:cpp=std.o)
OBJ2 = $(SRC:cpp=ft.o)

EVA = $(SBJ:cpp=std.o)
EVA2 = $(SBJ:cpp=ft.o)

#### ######## #### #### ######## #### #### ######## #### #### ######## #### #### ######## ####

#all: message $(OBJ) $(OBJ2) $(NAME_STD) $(NAME_FT)
all: message $(NAME_STD) $(NAME_FT)

#         Compiles and clears the screen      #
#c: clear fclean message $(OBJ) $(OBJ2) $(NAME_STD) $(NAME_FT) clean
c: clear fclean message $(NAME_STD) $(NAME_FT) clean

#         Compiles with fsanitize=address     #
f: clear fclean message std_sanitize ft_sanitize clean

#         Compiles only STD                   #
std: clear fclean message $(NAME_STD) clean

#         Compiles only FT                    #
ft: clear fclean message $(NAME_FT) clean



#         Compiles eval      #
eval_c: clear fclean message eval_std eval_ft clean

#         Compiles with fsanitize=address     #
eval_f: clear fclean message eval_std_sanitize eval_ft_sanitize clean



$(NAME_STD): $(OBJ) #
	@echo "\n\033[0;32mCompiling ${NAME_STD}..."
	@$(CC) $(CFLAGS) -o $(NAME_STD) $(OBJ)

$(NAME_FT): $(OBJ2) #
	@echo "\033[0;32mCompiling ${NAME_FT}..."
	@$(CC) $(CFLAGS) -o $(NAME_FT) $(OBJ2)
	@echo "\n\033[0mDone !\n"

std_sanitize: $(OBJ) #
	@echo "\n\033[0;32mCompiling ${NAME_STD}..."
	@$(CC) $(FFLAGS) -o $(NAME_STD) $(OBJ)

ft_sanitize: $(OBJ2) #
	@echo "\033[0;32mCompiling ${NAME_FT}..."
	@$(CC) $(FFLAGS) -o $(NAME_FT) $(OBJ2)
	@echo "\n\033[0mDone !\n"




eval_std: $(EVA) #
	@echo "\n\033[0;32mCompiling ${NAME_STD}..."
	@$(CC) $(CFLAGS) -o $(NAME_STD) $(EVA)

eval_ft: $(EVA2) #
	@echo "\033[0;32mCompiling ${NAME_FT}..."
	@$(CC)  $(CFLAGS) -o $(NAME_FT) $(EVA2)
	@echo "\n\033[0mDone !\n"

eval_std_sanitize: $(OBJ) #
	@echo "\n\033[0;32mCompiling ${NAME_STD}..."
	@$(CC) $(FFLAGS) -o $(NAME_STD) $(OBJ)

eval_ft_sanitize: $(OBJ2) #
	@echo "\033[0;32mCompiling ${NAME_FT}..."
	@$(CC) $(FFLAGS) -o $(NAME_FT) $(OBJ2)
	@echo "\n\033[0mDone !\n"

%.std.o: %.cpp
	@printf "\033[0;33mGenerating ${NAME_STD} objects... %s\n" $@
	@$(eval FT=0)
	@${CC} ${CFLAGS} $(FLAGS_INC) -c $< -o $@

%.ft.o: %.cpp
	@printf "\033[0;33mGenerating ${NAME_FT} objects... %s\n" $@
	@$(eval FT=1)
	@${CC} ${CFLAGS} $(FLAGS_INC) -c $< -o $@

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
