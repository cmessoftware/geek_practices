# links stdc++ library by default
# CC := g++
# or
CC := g++

all: hello

util.o: util.cc
		$(CC) -c -o util.o  util.cc

main.o: main.cc
		$(CC) -c -o main.o  main.cc

# notice -lstd++ is after the .o files
hello: main.o util.o
		$(CC) -o hello main.o util.o -lstdc++

duplicate.o: duplicate.cc
		$(CC) -c -o build/Debug/outDebug duplicate.cc

clean:
		-rm util.o main.o hello duplicate