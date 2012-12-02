CPP = g++
CFLAGS = -Wall -Wextra -Werror

build/HTTest: test/HTTest.cpp src/HashTable.o
	$(CPP) $(CFLAGS) -o build/HTTest test/HTTest.cpp src/HashTable.o

src/HashTable.o: src/HashTable.h src/HashTable.cpp
	cd src; $(CPP) $(CFLAGS) -c HashTable.cpp

clean:
	rm -f src/*.o;
	rm -f build/*;
