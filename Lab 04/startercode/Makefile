COMPILER = g++
OPTIONS = -Wall
PATIENT = Patient.o
PROGRAM = hospitalCharges.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): hospitalCharges.cpp $(PATIENT)
	$(COMPILER) hospitalCharges.cpp $(PATIENT) $(OPTIONS) -o $(PROGRAM)

$(PATIENT): Patient.cpp Patient.h
	$(COMPILER) Patient.cpp -c $(OPTIONS)

clean:
	rm -f $(PROGRAM) $(PATIENT)
