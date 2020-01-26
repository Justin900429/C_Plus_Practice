multifile_compile: test_definition.o test_implementation.o
	g++ test_definition.o test_implementation.o -o test

test_definition.o: test_definition.cpp
	g++ -c test_definition.cpp

test_implementation.o: test_implementation.cpp
	g++ -c test_implementation.cpp

clean:
	rm *.o test
