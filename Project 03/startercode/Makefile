COMPILER = g++
OPTIONS = -Wall
PROGRAM = tigerGame.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): Card.cpp Deck.cpp Hand.cpp main.cpp
	$(COMPILER) $(OPTIONS) -o $(PROGRAM) Card.cpp Deck.cpp Hand.cpp main.cpp

clean:
	rm $(PROGRAM)
