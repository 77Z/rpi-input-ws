CC=g++

all:
	$(CC) -lwiringPi easywsclient.cpp main.cpp -o in.out