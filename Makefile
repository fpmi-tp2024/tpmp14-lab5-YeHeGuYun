# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Iincludes
# Directories
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin
# Targets
EXECUTABLE = $(BIN_DIR)/labrabota5
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
# Default target
all: $(EXECUTABLE)
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
# Phony targets
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)/*.o $(EXECUTABLE)
