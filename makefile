CXX := c++

CFLAG := 
LFLAG := -lkyotocabinet

SRCS := $(shell find . -name '*.cpp')
OBJS := $(SRCS:%.cpp=build/%.o)

kc: build/ $(OBJS)
	$(CXX) -o $@ $(OBJS)

build/:
	mkdir build

build/%.o: %.cpp
	$(CXX) -c $(CFLAG) -o $@ $<


clean:
	rm -rf build kc
