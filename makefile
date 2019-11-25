myBanks: libs.a main.o
	gcc -Wall -g -o myBanks main.o ./libs.a
libs.a: myBank.o 
	gcc -shared -o libs.a myBank.o
myBank.o: myBank.c myBank.h
	gcc -Wall -g -fPIC -c myBank.c
main.o: main.c myBank.h
	gcc -Wall -g -c main.c

.PHONY:clean

clean:
	rm -f *.o *.so myBanky