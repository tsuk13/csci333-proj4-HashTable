CPP = g++
CFLAGS = -Wall -Wextra -Werror

build/HTTest: test/HTTest.cpp src/HashTable.o src/Entry.o
	$(CPP) $(CFLAGS) -o build/HTTest test/HTTest.cpp src/HashTable.o src/Entry.o

src/HashTable.o: src/HashTable.h src/HashTable.cpp src/Entry.o
	cd src; $(CPP) $(CFLAGS) -c HashTable.cpp

src/Entry.o: src/Entry.h src/Entry.cpp
	cd src; $(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f src/*.o;
	rm -f build/*;
