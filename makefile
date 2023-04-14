PROG=main.exe
CC=gcc
CFLAGS=-g -Wall -Werror
DEPS = SafeInput.h shapes.h calculator.h functions.h
OBJ = functions.o main.o SafeInput.o shapes.o calculator.o
 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
 
$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)