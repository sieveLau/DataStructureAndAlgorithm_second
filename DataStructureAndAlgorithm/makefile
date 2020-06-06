objects = main.o assist_tools.o linked_list.o node.o sorted_linked_list.o
CXXFLAGS = -march=native
CCFLAGS = $(CXXFLAGS)

all : main

debug : CXXFLAGS += -DDEBUG -DUNICODE -Wall -g
debug: CCFLAGS += -DDEBUG -DUNICODE  -Wall -g
debug: main

main: $(objects)
	$(CXX) -o main $(objects)

linked_list.o: node.h
sorted_linked_list.o: linked_list.h node.h

.PHONY : clean
clean :
	-rm main $(objects)