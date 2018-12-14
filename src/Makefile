all: Lachi-Dollar

myblock: main.o block.o blockchain.o
	g++ main.o block.o blockchain.o -o Lachi-Dollar -lssl -lcrypto

main.o: main.cpp
	g++ -c main.cpp

block.o: block.cpp
	g++ -c block.cpp

blockchain.o: blockchain.cpp
	g++ -c blockchain.cpp

clean:
	rm *o myblock
