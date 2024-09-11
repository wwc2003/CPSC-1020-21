COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): DivisionSales.cpp main.cpp
	$(COMPILER) $(OPTIONS) -o $(PROGRAM) DivisionSales.cpp main.cpp

clean:
	rm $(PROGRAM)
