# Output for binary
OUTPUT=$(BIN)/euler_problems

# Directories for compiling results
BIN=./bin
OBJ=$(BIN)/obj
SRC=./src

# Get headers and c files
DEPS=$(wildcard $(SRC)/*.h) $(wildcard $(SRC)/*/*.h)
SRCS=$(wildcard $(SRC)/*.c) $(wildcard $(SRC)/*/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

# Compiler / Compiler Settings
LINKS=-lm
FLAGS=-O2
COMPILER=gcc $(FLAGS)

# Command to create directory
MKDIR=mkdir

# Compile the Binary
all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	$(COMPILER) $^ -o $@ $(LINKS)

# Compile Every Object
$(OBJ)/%.o: $(SRC)/%.c $(DEPS)
	$(MKDIR) -p $(@D)
	$(COMPILER) -c $< -o $@

# Run the binary
run: $(OUTPUT)
	$(OUTPUT)

# Clean make output
clean:
	rm -rf ./bin/*