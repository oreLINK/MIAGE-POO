CXX=g++
CXXFLAGS=-Wall -Wextra -g
LDFLAGS=
EXEC=sutup
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
 
all: $(EXEC)
 
sutup: $(OBJ)
	$(CXX) -o $@  $^ $(LDFLAGS)
 
.PHONY: clean mrproper
 
clean:
	rm -rf *.o
	rm -rf $(EXEC)
 
# mrproper: clean
# 	rm -rf $(EXEC)