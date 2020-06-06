CC = g++
FLAGS = -Wextra -Wall -std=c++17
OBJ = main.o python.o
BINARY = output

build: ${OBJ}
	${CC} ${OBJ} ${FLAGS} -o ${BINARY}

main.o: main.cpp
	${CC} ${FLAGS} -c main.cpp

python.o: python.cpp
	${CC} ${FLAGS} -c python.cpp

clean:
	@echo "Cleaning Executables ..."
	rm ${OBJ} ${BINARY}
