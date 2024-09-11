COMPILER = g++
OPTIONS = -Wall
PROGRAM = areaCalc.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)	

$(PROGRAM): areaCalc.cpp Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp
	$(COMPILER) $(OPTIONS) $^ -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)