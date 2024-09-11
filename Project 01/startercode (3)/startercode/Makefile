COMPILER = g++
OPTIONS = -Wall
PROGRAM = quarantine.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)	

$(PROGRAM): calcDays.cpp Date.cpp main.cpp
	$(COMPILER) $(OPTIONS) $^ -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
