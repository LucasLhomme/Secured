##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

NAME = libhashtable.a
DEBUG = -g
CFLAGS += -Wall -Wextra -W -Iinclude -Isrc/lib/include

SRC =	./src/ht_search.c\
./src/hash.c\
./src/ht_insert.c\
./src/ht_dump.c\
./src/ht_delete.c\
./src/delete_hashtable.c\
./src/new_hashtable.c\

OBJ  	=	 $(SRC:.c=.o)


all: 	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C src/lib all
		ar rcT -o $(NAME) $(OBJ) libmy.a

clean || clear:
		$(MAKE) -C src/lib clean
		rm -f $(OBJ)

fclean:
		rm -f $(NAME) $(OBJ) libmy.a debug

re:
		$(MAKE) fclean
		$(MAKE) all

debug: 	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C src/lib all
		gcc -g $(CFLAGS) main.c -o debug $(OBJ) libmy.a

redebug:
		$(MAKE) fclean
		$(MAKE) debug
