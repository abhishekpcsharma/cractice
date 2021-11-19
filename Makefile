# Compiler
CC :=gcc

# Compiler directives/options
CFLAGS := -Wall

#Link or load directives
LDFLAGS :=

# source files
SRC :=$(wildcard *.c)

# object files
#OBJ :=$(wildcard *.o)

# header files
#HEADER :=$(wildcard *.h)

# Target name
TARGET :=cractice

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $^ $(CFLAGS) 
	@echo "Make completed successfully"

clean:
	rm $(TARGET)
	@echo "$(TARGET) have been removed"


#C_EXECUTABLE :=$(C_SOURCES:.c=)



#obj= _1_print_wo_semicolon.o main.o

#cractice: $(obj) header.h
#	gcc -o cractice _1_print_wo_semicolon.o main.o header.h
#	@echo "Make completed successfully"

#main.o:

#_1_print_wo_semicolon.o:

#clean:
#	rm cractice $(obj)
#	@echo "cractice, $(obj) have been removed"
