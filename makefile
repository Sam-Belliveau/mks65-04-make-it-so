BIN=./bin
SRC=./src

BIN_LIST=$(BIN)/main.o $(BIN)/problem_1.o $(BIN)/problem_2.o $(BIN)/problem_3.o $(BIN)/problem_4.o $(BIN)/problem_5.o $(BIN)/problem_6.o

OUTPUT=./euler_problems

all: $(BIN_LIST)
	gcc $(BIN_LIST) -o $(OUTPUT)

$(BIN)/main.o: $(SRC)/main.c $(SRC)/euler_problems/euler_problems.h
	gcc -c $(SRC)/main.c -o $(BIN)/main.o

$(BIN)/problem_1.o: $(SRC)/euler_problems/problem_1.c
	gcc -c $(SRC)/euler_problems/problem_1.c -o $(BIN)/problem_1.o

$(BIN)/problem_2.o: $(SRC)/euler_problems/problem_2.c
	gcc -c $(SRC)/euler_problems/problem_2.c -o $(BIN)/problem_2.o

$(BIN)/problem_3.o: $(SRC)/euler_problems/problem_3.c
	gcc -c $(SRC)/euler_problems/problem_3.c -o $(BIN)/problem_3.o

$(BIN)/problem_4.o: $(SRC)/euler_problems/problem_4.c
	gcc -c $(SRC)/euler_problems/problem_4.c -o $(BIN)/problem_4.o

$(BIN)/problem_5.o: $(SRC)/euler_problems/problem_5.c
	gcc -c $(SRC)/euler_problems/problem_5.c -o $(BIN)/problem_5.o

$(BIN)/problem_6.o: $(SRC)/euler_problems/problem_6.c
	gcc -c $(SRC)/euler_problems/problem_6.c -o $(BIN)/problem_6.o

run:
	$(OUTPUT)