COMPILER = g++
OPTIONS = -Wall
PROGRAM = accum.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): accum.cpp main.cpp
	$(COMPILER) $(OPTIONS) -o $(PROGRAM) accum.cpp main.cpp

clean:
	rm $(PROGRAM)
