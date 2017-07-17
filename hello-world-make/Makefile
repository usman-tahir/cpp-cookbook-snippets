# Default target invoked by 'make'
.PHONY: all
all: hello

# How to build 'hello' from 'hello.cpp'
hello: hello.cpp
	g++ -o hello hello.cpp

# Copy 'hello' to the bin/ subdirectory (creating it if necessary)
.PHONY: install
install:
	mkdir -p bin
	cp -p hello bin
	rm -f hello

# Delete 'hello' and 'hello.o'
.PHONY: clean
clean:
	rm -f hello
	rm -rf bin