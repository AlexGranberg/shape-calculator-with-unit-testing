PROG=main.exe
TEST=unittest.exe
CFLAGS=-Wall -Werror
DEPS=SafeInput.h shapes.h calculator.h functions.h rockPaperScissor.h
SOURCES=functions.c main.c SafeInput.c shapes.c calculator.c rockPaperScissor.c
CC=gcc
DEBUG?=1
GTEST=gtest
LIBGTEST = C:\msys64\mingw64\lib\libgtest_main.a C:\msys64\mingw64\lib\libgtest.a

ifeq ($(DEBUG), 1)
	CFLAGS += -g
	OUTPUTDIR=bin/debug
	PROG=main-debug.exe
else
	CFLAGS += -g0 -O3
	OUTPUTDIR=bin/release
endif


OBJ = $(addprefix $(OUTPUTDIR)/,$(SOURCES:.c=.o))
 
$(PROG): $(OUTPUTDIR) $(OBJ)
	$(CC) $(CFLAGS) -o $(PROG) $(OBJ) 

$(OUTPUTDIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@del /q "$(OUTPUTDIR)"
	@del /q $(PROG)


$(OUTPUTDIR):
	@mkdir "$(OUTPUTDIR)"

$(TEST): shapes.o testShapes.o SafeInput.o functions.o calculator.o testCalculator.o
	g++ -o $@ $^ $(CFLAGS) -I $(GTEST) $(LIBGTEST)

test: $(TEST)
	./$(TEST)

.PHONY: clean test