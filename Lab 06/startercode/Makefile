COMPILER = g++
OPTIONS = -Wall
PROGRAM = dates.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Date.cpp Date.h
	$(COMPILER) $(OPTIONS) $^ -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
