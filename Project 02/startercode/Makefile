COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

HEADERS = Quiz.h printResult.h

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp printResult.cpp Quiz.cpp $(HEADERS)
	$(COMPILER) $(OPTIONS) $^ -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
