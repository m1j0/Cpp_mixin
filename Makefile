HEADERS=Mixins.h Flavors.h MixinBase.h MixinUserBase.h
CC_FLAGS=-std=c++11 -g

CC=clang++ ${CC_FLAGS}
LNK=clang++ ${CC_FLAGS}

run:all
	./main

clean:
	rm -f *.o main

all:main

main:main.o Flavors.o Mixins.o
	${LNK} main.o Flavors.o Mixins.o -o main

main.o:main.cpp ${HEADERS}
	${CC} -c main.cpp -o main.o

Mixins.o:Mixins.cpp ${HEADERS}
	${CC} -c Mixins.cpp -o Mixins.o

Flavors.o:Flavors.cpp ${HEADERS}
	${CC} -c Flavors.cpp -o Flavors.o