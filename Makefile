COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): Employee.cpp Car.cpp Guest.cpp Invoice.cpp Large.cpp main.cpp Motorcycle.cpp Student.cpp
	$(COMPILER) $(OPTIONS) Employee.cpp Car.cpp Guest.cpp Invoice.cpp Large.cpp main.cpp Motorcycle.cpp Student.cpp -o $(PROGRAM)

clean:
	rm *.out