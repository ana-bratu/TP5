CXXFLAGS = -Wall -Wextra
objects = main.o Node.o Complex.o

main : $(objects)
	g++ $(CXXFLAGS) -o main $(objects)

main.o : Node.h main.cpp
	g++ $(CXXFLAGS) -o main.o -c main.cpp

Node.o: Node.h Node.cpp Complex.h
	g++ $(CXXFLAGS) -o Node.o -c Node.cpp

Complex.o: Complex.h Complex.cpp
	g++ $(CXXFLAGS) -o Complex.o -c Complex.cpp

clean:
	rm main $(objects)
