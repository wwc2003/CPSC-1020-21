COMPILER = g++
OPTIONS = -Wall
PROGRAM = shapes.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): Circle.cpp Square.cpp Rectangle.cpp Trapezoid.cpp main.cpp
	$(COMPILER) $(OPTIONS) -o $(PROGRAM) Circle.cpp Square.cpp Rectangle.cpp Trapezoid.cpp main.cpp

clean:
	rm $(PROGRAM)
