OBJ = obj
SRC = src
BIN = bin
INC = include
OUT = output
GEN = generated
MAINSRC = ./Robert.txt

.PHONY: all

all: clean $(BIN)/sintactico run

$(BIN)/sintactico: $(OBJ)/main.o $(OBJ)/y.tab.o
		gcc -o $(BIN)/sintactico $(OBJ)/main.o $(OBJ)/y.tab.o
$(OBJ)/y.tab.o: $(GEN)/y.tab.c
		gcc -c $(GEN)/y.tab.c -o $(OBJ)/y.tab.o
$(OBJ)/main.o: $(SRC)/main.c
		gcc -c $(SRC)/main.c -o $(OBJ)/main.o
$(GEN)/y.tab.c: $(SRC)/gramatica.y $(GEN)/lex.yy.c
		bison -v -o $(GEN)/y.tab.c $(SRC)/gramatica.y
$(GEN)/lex.yy.c: $(SRC)/tokens.l
		flex $(SRC)/tokens.l
		mv lex.yy.c $(GEN)

run:
	./$(BIN)/sintactico $(MAINSRC)

clean:
		rm -rf $(GEN)/* $(OBJ)/* $(BIN)/*