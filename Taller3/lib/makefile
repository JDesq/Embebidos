NAME = biblioteca
SRC = $(NAME).c 
OBJ = $(NAME).o
LIBE = lib$(NAME).a
LIBD = lib$(NAME).so
CC = gcc
CFLAGS = -c -Wall


#Creación de biblioteca estática
$(LIBE): $(OBJ)
		ar rv $(LIBE) $(OBJ)
		ranlib $(LIBE)

#Creación de biblioteca dinámica
$(LIBD): $(OBJ)
		ld -o $(LIBD) $(OBJ) -shared

#Creación de archivo objeto
$(OBJ): $(SRC)
		$(CC) $(CFLAGS) $(SRC)