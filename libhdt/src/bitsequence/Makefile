CXX=g++

CXXFLAGS := $(CXXFLAGS) -std=c++11 -I. -I../../include

SRC := $(wildcard ./*.cpp)
OBJ := $(patsubst %.cpp,%.o,$(SRC)) 

STATIC_LIB := libbitsequence.a

all: $(STATIC_LIB)

$(STATIC_LIB): $(OBJ)
	ar rcs $@ $^ 
.o: .cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@
clean:
	rm -f $(OBJ) $(STATIC_LIB)
