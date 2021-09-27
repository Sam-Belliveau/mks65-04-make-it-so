BIN=./bin
SRC=./src

BIN_LIST=$(BIN)/main.o $(BIN)/problem_1.o $(BIN)/problem_2.o $(BIN)/problem_3.o $(BIN)/problem_4.o $(BIN)/problem_5.o $(BIN)/problem_6.o

LINKS=-lm
FLAGS=-O2
COMPILER=gcc $(FLAGS) 

OUTPUT=./euler_problems

all: $(BIN_LIST)
	$(COMPILER) $(BIN_LIST) -o $(OUTPUT) $(LINKS)

$(BIN)/main.o: $(SRC)/main.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/main.c -o $(BIN)/main.o

$(BIN)/problem_1.o: $(SRC)/euler_problems/problem_1.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/euler_problems/problem_1.c -o $(BIN)/problem_1.o

$(BIN)/problem_2.o: $(SRC)/euler_problems/problem_2.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/euler_problems/problem_2.c -o $(BIN)/problem_2.o

$(BIN)/problem_3.o: $(SRC)/euler_problems/problem_3.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/euler_problems/problem_3.c -o $(BIN)/problem_3.o

$(BIN)/problem_4.o: $(SRC)/euler_problems/problem_4.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/euler_problems/problem_4.c -o $(BIN)/problem_4.o

$(BIN)/problem_5.o: $(SRC)/euler_problems/problem_5.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/euler_problems/problem_5.c -o $(BIN)/problem_5.o

$(BIN)/problem_6.o: $(SRC)/euler_problems/problem_6.c $(SRC)/euler_problems/euler_problems.h
	$(COMPILER) -c $(SRC)/euler_problems/problem_6.c -o $(BIN)/problem_6.o

run: $(OUTPUT)
	$(OUTPUT)