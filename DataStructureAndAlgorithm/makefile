CXXFLAGS = -march=native -MP -MD
CCFLAGS = $(CXXFLAGS)
SRC = $(wildcard *.cc)
all : main

debug : CXXFLAGS += -DDEBUG -DUNICODE -Wall -g -O0
debug: CCFLAGS += -DDEBUG -DUNICODE  -Wall -g -O0
debug: main

main: $(SRC:%.cc=%.o)
	$(CXX) -o $@ $^

linked_list.o: node.h
sorted_linked_list.o: linked_list.h node.h

-include $(SRC:.cc=.d)

.PHONY : clean
clean :
	-rm main *.o *.d