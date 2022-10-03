CC = g++
CFLAGS = -g -Wall -W

CPP_SOURCES := $(wildcard *.cpp)
CPP_OBJECTS := $(CPP_SOURCES:.cpp=.o)


prog: $(CPP_OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(CPP_OBJECTS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf prog
