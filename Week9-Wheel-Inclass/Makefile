CC=g++
CFLAGS=-c -Wall -ggdb -I.
LDFLAGS=
SOURCES=wheel-sandbox.cpp
EXECUTABLE=wheel-sandbox
TESTS=wheel_test.h

OBJECTS=$(SOURCES:.cpp=.o)


FLAGS   = -Iinclude

all: $(SOURCES) $(EXECUTABLE)
	

# These next lines do a bit of magic found from http://stackoverflow.com/questions/2394609/makefile-header-dependencies
# Essentially it asks the compiler to read the .cpp files and generate the needed .h dependencies.
# This way if any .h file changes the correct .cpp files will be recompiled
depend: .depend

.depend: $(SOURCES)
	rm -f ./.depend
	$(CC) $(CFLAGS) -MM $^ >> ./.depend;

include .depend
# End .h file magic

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *o $(EXECUTABLE)
	rm -f ./.depend
	rm -f testrunner*
	rm -f labtestrunner*
	
# CXX Testing	
CXXLOCATION = cxxtest
CXXTESTGEN = $(CXXLOCATION)/bin/cxxtestgen

test: testrunner
	./testrunner

testrunner: testrunner.cpp 
	g++ -I. -I$(CXXLOCATION)/ -ggdb -Wall -o testrunner testrunner.cpp
	

testrunner.cpp: $(HEADERS) $(SOURCES) $(TESTS) depend
	$(CXXTESTGEN) --error-printer -o testrunner.cpp $(TESTS)
	



