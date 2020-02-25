APP = calculadora
NAME = biblioteca
SRC = $(APP).c 
CC = gcc
BIN = ../bin
INCLUDE = ../include
LIB = ../lib
LIBE = lib$(NAME).a
LIBD = lib$(NAME).so
CFLAGS = -c -Wall

APP: APP_E APP_D
#App con biblioteca estática
APP_E: $(SRC)
		$(CC) -o $(BIN)/$(APP)_e $(SRC) $(LIB)/$(LIBE) -I$(INCLUDE) 

#App con biblioteca dinámica
#El ultimo comando se requiere para que funcione la app dinámica
APP_D: $(SRC)
		$(CC) -o $(BIN)/$(APP)_d $(SRC) -I$(INCLUDE) -L$(LIB) -Bdynamic $(LIB)/$(LIBD)
		export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(LIB) 