COMPILER = g++
OPTIONS = -Wall
PROGRAM = test.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)	

$(PROGRAM): test.cpp Car.cpp Employee.cpp Invoice.cpp Motorcycle.cpp Motorscooter.cpp Passtype.cpp Student.cpp Vendor.cpp Visitor.cpp
	$(COMPILER) $(OPTIONS) $^ -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
